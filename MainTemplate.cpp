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
class DigitSumCalculator {
private:
    struct PowerOfTenTable {
        uint64_t values[20];
        
        PowerOfTenTable() {
            values[0] = 1;
            for (int i = 1; i < 20; i++) {
                values[i] = values[i-1] * 10;
            }
        }
    };

    // Calculate sum of digits for numbers from 1 to n
    static uint64_t calculateCumulativeDigitSum(uint64_t n) {
        if (n == 0) return 0;
        
        uint64_t total = 0;
        uint64_t multiplier = 1;
        
        while (multiplier <= n) {
            uint64_t higherPart = n / (multiplier * 10);
            uint64_t currentDigit = (n / multiplier) % 10;
            uint64_t lowerPart = n % multiplier;
            
            // Add contribution from numbers before current digit position
            total += higherPart * 45 * multiplier;
            
            // Add contribution from current digit
            total += (currentDigit * (currentDigit - 1) / 2) * multiplier;
            
            // Add contribution from rem part
            total += currentDigit * (lowerPart + 1);
            
            multiplier *= 10;
        }
        
        return total;
    }

    // Helper to get digit sum for a range [start, end]
    static uint64_t getRangeDigitSum(uint64_t start, uint64_t end) {
        return calculateCumulativeDigitSum(end) - calculateCumulativeDigitSum(start - 1);
    }

public:
    static uint64_t findPos(uint64_t tar, const PowerOfTenTable& powT) {
        uint64_t result = 0;
        uint64_t rem = tar;
        int digln = 1;
        
        while (digln < 19) {
            uint64_t numCunt = 9 * powT.values[digln - 1];
            __uint128_t digitCnt = (__uint128_t)numCunt * digln;
            
            if (rem >= digitCnt) {
                // Process complete block of numbers with this digit length
                uint64_t blkS = powT.values[digln - 1];
                uint64_t blkE = powT.values[digln] - 1;
                result += getRangeDigitSum(blkS, blkE);
                rem -= digitCnt;
                digln++;
            } else {
                // Process partial block
                uint64_t compNum = rem / digln;
                uint64_t partDig = rem % digln;
                uint64_t sNum = powT.values[digln - 1];
                
                if (compNum > 0) {
                    result += getRangeDigitSum(sNum, sNum + compNum - 1);
                }
                
                if (partDig > 0) {
                    uint64_t part = sNum + compNum;
                    string numberStr = to_string(part);
                    for (uint64_t i = 0; i < partDig; i++) {
                        result += (numberStr[i] - '0');
                    }
                }
                break;
            }
        }
        
        return result;
    }

    static void porcess() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int queryCnt;
        if (!(cin >> queryCnt)) return;
        
        PowerOfTenTable powT;
        
        for (int i = 0; i < queryCnt; i++) {
            uint64_t position;
            cin >> position;
            cout << findPos(position, powT) << "\n";
        }
    }
};

// ---------- SOLUTION ----------
void solve() {
    DigitSumCalculator::porcess();
}

// ---------- MAIN ----------
int main() {
    fastio();
    int t; 
    cin >> t;
    
    while (t--) {
        solve();
    }
    return 0;
}