#include <bits/stdc++.h>
using namespace std;

// ---------- FAST I/O ----------
#define endl '\n'
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr);

// ---------- TYPEDEFS ----------
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>

// ---------- MACROS ----------
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define ff first
#define ss second

// ---------- CONSTANTS ----------
const ll INF = 1e18;
const int MOD = 1e9+7;
const int MAXN = 2e5+5;

// ---------- DEBUG ----------
#define debug(x) cerr << #x << " = " << (x) << endl

// ---------- MATH UTILS ----------
ll gcdll(ll a, ll b) { return b ? gcdll(b, a % b) : a; }
ll lcmll(ll a, ll b) { return a / gcdll(a, b) * b; }

ll modpow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

ll modinv(ll a, ll m = MOD) { return modpow(a, m - 2, m); }

// ---------- GRAPH PROCESSOR ----------
class GraphProcessor {
private:
    struct GraphData {
        int vertexCount, edgeCount;
        vector<vector<pair<int, int>>> adjacency;
        vector<pair<int, int>> edges;
        
        GraphData(int n, int m) : vertexCount(n), edgeCount(m) {
            adjacency.resize(n + 1);
            edges.resize(m + 1);
        }
        
        void addEdge(int idx, int u, int v) {
            edges[idx] = {u, v};
            adjacency[u].emplace_back(v, idx);
            adjacency[v].emplace_back(u, idx);
        }
    };

    struct BriD {
        vector<int> disc, low;
        vector<bool> bridgeStatus;
        int timer;
        
        BriD(const GraphData &graph) {
            disc.assign(graph.vertexCount + 1, -1);
            low.assign(graph.vertexCount + 1, 0);
            bridgeStatus.assign(graph.edgeCount + 1, false);
            timer = 0;
            
            for (int i = 1; i <= graph.vertexCount; i++) {
                if (disc[i] == -1) {
                    findBridgesDFS(graph, i, -1);
                }
            }
        }
        
        void findBridgesDFS(const GraphData &graph, int u, int parentEdge) {
            disc[u] = low[u] = ++timer;
            
            for (const auto &[v, edgeId] : graph.adjacency[u]) {
                if (edgeId == parentEdge) continue;
                
                if (disc[v] == -1) {
                    findBridgesDFS(graph, v, edgeId);
                    low[u] = min(low[u], low[v]);
                    
                    if (low[v] > disc[u]) {
                        bridgeStatus[edgeId] = true;
                    }
                } else {
                    low[u] = min(low[u], disc[v]);
                }
            }
        }
    };

    struct ComponentBuilder {
        vector<int> compId;
        vector<vector<pair<int, int>>> compGraph;
        int compCounter;
        
        ComponentBuilder(const GraphData &graph, const BriD &bd) {
            compId.assign(graph.vertexCount + 1, 0);
            compCounter = 0;
            
            for (int i = 1; i <= graph.vertexCount; i++) {
                if (compId[i] == 0) {
                    compCounter++;
                    buildComponentsDFS(graph, bd, i, compCounter);
                }
            }
            
            compGraph.resize(compCounter + 1);
            buildComponentGraph(graph, bd);
        }
        
        void buildComponentsDFS(const GraphData &graph, const BriD &bd, int u, int currentComp) {
            compId[u] = currentComp;
            
            for (const auto &[v, edgeId] : graph.adjacency[u]) {
                if (!bd.bridgeStatus[edgeId] && compId[v] == 0) {
                    buildComponentsDFS(graph, bd, v, currentComp);
                }
            }
        }
        
        void buildComponentGraph(const GraphData &graph, const BriD &bd) {
            for (int edgeId = 1; edgeId <= graph.edgeCount; edgeId++) {
                if (bd.bridgeStatus[edgeId]) {
                    int u = graph.edges[edgeId].first;
                    int v = graph.edges[edgeId].second;
                    int compU = compId[u], compV = compId[v];
                    
                    compGraph[compU].emplace_back(compV, edgeId);
                    compGraph[compV].emplace_back(compU, edgeId);
                }
            }
        }
    };

    struct PathFinder {
        static vector<int> findCriticalPath(int Scomp, int eComp, const ComponentBuilder &cb) {
            vector<int> parent(cb.compCounter + 1, -1);
            vector<int> edgeUsed(cb.compCounter + 1, -1);
            queue<int> q;
            
            q.push(Scomp);
            parent[Scomp] = Scomp;
            
            while (!q.empty()) {
                int current = q.front();
                q.pop();
                
                if (current == eComp) break;
                
                for (const auto &[neighbor, edgeId] : cb.compGraph[current]) {
                    if (parent[neighbor] == -1) {
                        parent[neighbor] = current;
                        edgeUsed[neighbor] = edgeId;
                        q.push(neighbor);
                    }
                }
            }
            
            vector<int> pathEdges;
            if (parent[eComp] == -1) return pathEdges;
            
            for (int current = eComp; current != Scomp; current = parent[current]) {
                pathEdges.push_back(edgeUsed[current]);
            }
            
            return pathEdges;
        }
    };

    struct lvlComputer {
        static vector<int> computelvls(const GraphData &graph, const vector<int> &criticalEdges) {
            const int INF = 1e9;
            vector<int> egde(graph.vertexCount + 1, INF);
            vector<int> lvl(graph.vertexCount + 1, INT_MAX);
            
            priority_queue<tuple<int, int, int>, 
                          vector<tuple<int, int, int>>, 
                          greater<tuple<int, int, int>>> pq;
            
            intiVal(graph, criticalEdges, egde, lvl, pq);
            processQueue(graph, egde, lvl, pq);
            
            return lvl;
        }
        
    private:
        static void intiVal(const GraphData &graph, const vector<int> &criticalEdges, 
                                   vector<int> &egde, vector<int> &lvl, 
                                   priority_queue<tuple<int, int, int>, 
                                   vector<tuple<int, int, int>>, 
                                   greater<tuple<int, int, int>>> &pq) {
            for (int edgeId : criticalEdges) {
                int u = graph.edges[edgeId].first;
                int v = graph.edges[edgeId].second;
                
                updateNode(u, 0, edgeId, egde, lvl, pq);
                updateNode(v, 0, edgeId, egde, lvl, pq);
            }
        }
        
        static void updateNode(int node, int nedge, int newlvl, 
                              vector<int> &egde, vector<int> &lvl,
                              priority_queue<tuple<int, int, int>, 
                              vector<tuple<int, int, int>>, 
                              greater<tuple<int, int, int>>> &pq) {
            if (nedge < egde[node] || (nedge == egde[node] && newlvl < lvl[node])) {
                egde[node] = nedge;
                lvl[node] = newlvl;
                pq.emplace(nedge, newlvl, node);
            }
        }
        
        static void processQueue(const GraphData &graph, vector<int> &egde, vector<int> &lvl,
                                priority_queue<tuple<int, int, int>, 
                                vector<tuple<int, int, int>>, 
                                greater<tuple<int, int, int>>> &pq) {
            while (!pq.empty()) {
                auto [currEdge, currLvl, u] = pq.top();
                pq.pop();
                
                if (currEdge != egde[u] || currLvl != lvl[u]) continue;
                
                for (const auto &[v, edgeId] : graph.adjacency[u]) {
                    int nedge = currEdge + 1;
                    int newlvl = currLvl;
                    
                    if (nedge < egde[v] || (nedge == egde[v] && newlvl < lvl[v])) {
                        updateNode(v, nedge, newlvl, egde, lvl, pq);
                    }
                }
            }
        }
    };

public:
    static void runCase() {
        int n, m;
        cin >> n >> m;
        
        GraphData graph(n, m);
        for (int i = 1; i <= m; i++) {
            int u, v;
            cin >> u >> v;
            graph.addEdge(i, u, v);
        }
        
        BriD briD(graph);
        ComponentBuilder compBuilder(graph, briD);
        
        int Scomp = compBuilder.compId[1];
        int eComp = compBuilder.compId[n];
        vector<int> criticalPath = PathFinder::findCriticalPath(Scomp, eComp, compBuilder);
        
        int queryCount;
        cin >> queryCount;
        
        if (criticalPath.empty()) {
            for (int i = 0; i < queryCount; i++) {
                int node; cin >> node;
                cout << -1 << (i + 1 == queryCount ? '\n' : ' ');
            }
            return;
        }
        
        vector<int> lvls = lvlComputer::computelvls(graph, criticalPath);
        for (int i = 0; i < queryCount; i++) {
            int node; cin >> node;
            cout << lvls[node] << (i + 1 == queryCount ? '\n' : ' ');
        }
    }
};

// ---------- SOLUTION ----------
void solve() {
    GraphProcessor::runCase();
}

// ---------- MAIN ----------
int main() {
    fastio();
    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}
