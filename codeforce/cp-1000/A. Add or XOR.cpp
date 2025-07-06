#include <bits/stdc++.h>

// Macro aliases
#define ll long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define nl "\n"
#define vec vector
#define append push_back
#define MAX_INF LLONG_MAX
#define pair_ll pair<ll, ll>

using namespace std;

const ll MODULO = 1e9 + 7;

void check_valid_distance() {
    ll num_elements;
    cin >> num_elements;

    ll start_x, start_y, target_x, target_y;
    cin >> start_x >> start_y >> target_x >> target_y;

    vec<ll> radii(num_elements);
    ll total_radius = 0, max_radius = 0;

    for (ll i = 0; i < num_elements; ++i) {
        cin >> radii[i];
        total_radius += radii[i];
        max_radius = max(max_radius, radii[i]);
    }

    ll delta_x = start_x - target_x;
    ll delta_y = start_y - target_y;
    ll dist_squared = delta_x * delta_x + delta_y * delta_y;

    ll outer_radius = total_radius;
    ll inner_radius = (num_elements == 0) ? 0 : max(0LL, max_radius - (total_radius - max_radius));

    ll min_squared = inner_radius * inner_radius;
    ll max_squared = outer_radius * outer_radius;

    if (dist_squared >= min_squared && dist_squared <= max_squared) {
        cout << "Yes" << nl;
    } else {
        cout << "No" << nl;
    }
}

int main() {
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    fast_io;

    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        check_valid_distance();
    }

    return 0;
}
