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

// GCD & LCM
ll gcdll(ll a, ll b) { return b ? gcdll(b, a % b) : a; }
ll lcmll(ll a, ll b) { return a / gcdll(a, b) * b; }

// Fast Power (binary exponentiation)
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

// ---------- NUMBER THEORY UTILS ----------
vector<ull> special_divisor(ull n) {
    vector<ull> divi;
    ull p = 10;
    
    for (int k = 1; k <= 18; ++k) {
        ull d = p + 1;
        if (d != 0 && n % d == 0) {
            divi.pb(n / d);
        }
        if (k < 18) p *= 10;
    }
    
    return divi;
}

// ---------- BASE CONVERSION UTILS ----------
ll to_base3(ll num) {
    ll ans = 0;
    ll power = 1;
    while (num > 0) {
        ans += (num % 3) * power;
        num /= 3;
        power *= 10;
    }
    return ans;
}

vector<int> to_base3_digits(ll num) {
    vector<int> digits;
    while (num > 0) {
        digits.pb(num % 3);
        num /= 3;
    }
    if (digits.empty()) digits.pb(0);
    return digits;
}

// Modular inverse (Fermat, m must be prime)
ll modinv(ll a, ll m = MOD) {
    return modpow(a, m - 2, m);
}

// ---------- PRIME UTILS ----------
vector<int> sieve(int n) {
    vector<int> primes, isPrime(n+1, 1);
    isPrime[0] = isPrime[1] = 0;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) isPrime[j] = 0;
        }
    }
    for (int i = 2; i <= n; i++) if (isPrime[i]) primes.pb(i);
    return primes;
}

bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) if (n % i == 0) return false;
    return true;
}

// Prime Factorization (Trial Division)
vector<ll> factorize(ll n) {
    vector<ll> f;
    for (ll d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            f.pb(d);
            n /= d;
        }
    }
    if (n > 1) f.pb(n);
    return f;
}

// ---------- INPUT HELPERS ----------
template<typename T>
void read(vector<T> &v) { for (auto &x : v) cin >> x; }

template<typename T>
void print(const vector<T> &v) { for (auto &x : v) cout << x << " "; cout << endl; }

// ---------- SOLUTION UTILS ----------
ull s3(ll n) {
    ull s = 0;
    while (n) { s += n % 3; n /= 3; }
    return s;
}

// ---------- DIGIT SUM CALCULATOR ----------

// ---------- SOLUTION ----------
ll calcSum(const vector<ll>& srtdArr, int i, bool take) {
    if (i >= srtdArr.size()) return 0;
    
    if (take) {
        return srtdArr[i] + calcSum(srtdArr, i + 1, false);
    } else {
        return calcSum(srtdArr, i + 1, true);
    }
}

void solve() {
        
}

// ---------- MAIN ----------
int main() {
    fastio();
    int t; 
   
    cin>>t;
    while (t--) {
        solve();
         int n, k;
        string s;
        cin >> n >> k >> s;
        
      
        int maxi = 0;
        int curr = 0;
        for (char c : s) {
            curr = (c == '1') ? curr + 1 : 0;
            maxi = max(maxi, curr);
        }
        
        if (maxi >= k) {
            cout << "NO\n";
            continue;
        }
        
        cout << "YES\n";      
        vector<int> indi(n);
        for (int i = 0; i < n; i++) indi[i] = i;
      
        stable_sort(indi.begin(), indi.end(), [&](int a, int b) {
            return s[a] < s[b];
        });
        
        vector<int> preSum(n);
        int value = n;
        for (int index : indi) {
            preSum[index] = value--;
        }
        
        for (int i = 0; i < n; i++) {
            if (i > 0) cout << " ";
            cout << preSum[i];
        }
        cout << "\n";
    }
    return 0;
}
