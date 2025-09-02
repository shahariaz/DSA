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
enum TapState {
    notVisited,
    LEAKING,
    TRAPPED
};

// ---------- DEBUG ----------
#define debug(x) cerr << #x << " = " << (x) << endl

// ---------- WATER TAP SIMULATION ----------
const char WALL = '#';
const char EMPTY = '.';



int rows, cols;
vector<string> g;
vector<vector<TapState>> tapState;

bool waterFlw(int x, int y) {
    if (y >= rows) return false;
    if (g[y][x] == WALL) return true;
    if (tapState[y][x] == TRAPPED) return true;
    if (tapState[y][x] == LEAKING) return false;
    
    tapState[y][x] = LEAKING;
    
    if (!waterFlw(x, y + 1)) {
        return false;
    }
    
    auto leaked = [&](int direction) -> bool {
        int currX = x;
        while (true) {
            currX += direction;
            if (currX < 0 || currX >= cols) return false;
            if (g[y][currX] == WALL) return true;
            if (tapState[y][currX] == TRAPPED) return true;
            if (tapState[y][currX] == LEAKING) return false;
            
            if (y + 1 < rows) {
                bool canGoDown = (g[y + 1][currX] == WALL) || 
                                 (tapState[y + 1][currX] == TRAPPED);
                if (!canGoDown) {
                    if (!waterFlw(currX, y + 1)) {
                        return false;
                    }
                }
            }
            
            tapState[y][currX] = LEAKING;
        }
    };
    
    bool lblkd = leaked(-1);
    bool rightBlocked = leaked(1);
    
    if (lblkd && rightBlocked) {
        tapState[y][x] = TRAPPED;
        
        int lx = x - 1;
        while (lx >= 0 && g[y][lx] != WALL) {
            tapState[y][lx] = TRAPPED;  
            lx--;
        }
        
        int rx = x + 1;
        while (rx < cols && g[y][rx] != WALL) {
            tapState[y][rx] = TRAPPED;
            rx++;
        }
        
        return true;
    }
    
    return false;
}

long long calTap() {
    tapState.assign(rows, vector<TapState>(cols, notVisited));
    
    for (int col = 0; col < cols; col++) {
        if (g[0][col] == EMPTY) {
            waterFlw(col, 0);
        }
    }
    
    long long totalWater = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (tapState[i][j] == TRAPPED) {
                totalWater++;
            }
        }
    }
    
    return totalWater;
}

// ---------- SOLUTION ----------
void solve() {
    cin >> rows >> cols;
    g.resize(rows);
    for (int i = 0; i < rows; i++) {
        cin >> g[i];
    }
    
    cout << calTap() << endl;
}

// ---------- MAIN ----------
int main() {
    fastio();
    int t; 
    cin >> t;
    for (int caseNum = 1; caseNum <= t; caseNum++) {
        cout << "Case " << caseNum << ": ";
        solve();
    }
    return 0;
}