#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>
using namespace std;

constexpr long long LC = 1000000000LL;

long long query(char direction, long long value) {
    cout << "? " << direction << " " << value << '\n' << flush;
    long long res;
    if (!(cin >> res)) exit(0);
    if (res == -1) exit(0);
    return res;
}

pair<long long, long long> calculateCenterDifferentAlgo(const vector<pair<long long, long long>>& points) {
    long long min_x = numeric_limits<long long>::max();
    long long max_x = numeric_limits<long long>::min();
    long long min_y = numeric_limits<long long>::max();
    long long max_y = numeric_limits<long long>::min();
    long long sum_x = 0, sum_y = 0;
    
    for (const auto& [x, y] : points) {
        min_x = min(min_x, x);
        max_x = max(max_x, x);
        min_y = min(min_y, y);
        max_y = max(max_y, y);
        sum_x += x;
        sum_y += y;
    }
    
   
    long long x_center = (3 * min_x + max_x + sum_x / points.size()) / 5;
    long long y_center = (3 * min_y + max_y + sum_y / points.size()) / 5;
    
  
    query('R', LC);
    query('R', LC);
    query('U', LC);
    long long upres = query('U', LC);
    
    query('D', LC);
    query('D', LC);
    query('D', LC);
    long long dow = query('D', LC);
    

    long long maxi = numeric_limits<long long>::min();
    long long maxDiff = numeric_limits<long long>::min();
    
    for (const auto& [x, y] : points) {
        maxi = max(maxi, x + y);
        maxDiff = max(maxDiff, x - y);
    }
    
    long long sumAll = upres - 4 * LC + maxi;
    long long diffAll = dow - 4 * LC + maxDiff;
    
    return {(sumAll + diffAll) / 2, (sumAll - diffAll) / 2};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    if (!(cin >> testCases)) return 0;
    
    while (testCases--) {
        int n;
        cin >> n;
        vector<pair<long long, long long>> points(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
        }
        
        auto [x, y] = calculateCenterDifferentAlgo(points);
        cout << "! " << x << " " << y << '\n' << flush;
    }
    
    return 0;
}