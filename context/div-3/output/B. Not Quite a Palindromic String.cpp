#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;
    while (testCases--) {
        int stringLength, constraint;
        string inputString;
        cin >> stringLength >> constraint >> inputString;

        int countOnes = 0;
        for (char ch : inputString) if (ch == '1') countOnes++;
        int countZeros = stringLength - countOnes;

        int midPoint = stringLength / 2;
        int requiredPairs = midPoint - constraint;

        bool isValid = ((countOnes >= requiredPairs && countZeros >= requiredPairs) &&
                       ((countOnes - requiredPairs) % 2 == 0) &&
                       ((countZeros - requiredPairs) % 2 == 0));

        cout << (isValid ? "YES\n" : "NO\n");
    }
    return 0;
}