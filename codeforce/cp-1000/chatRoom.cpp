#include <iostream>
#include <cstdint>
using namespace std;
using u64 = uint64_t;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int td;
    cin >> td;
    while (td--) {
        u64 array_size, leftBond, rightBound, target_pos;
        cin >> array_size >> leftBond >> rightBound >> target_pos;

        if (array_size == 1) {
            cout << leftBond << "\n";
        } else if (array_size % 2 == 1) {
            if (target_pos <= array_size) {
                cout << leftBond << "\n";
            } else {
                cout << "-1\n";
            }
        } else {
            if (array_size == 2) {
                cout << "-1\n";
            } else {
                u64 crnt = leftBond;
                while (true) {
                    bool is_valid = true;
                    for (int bit_pos = 0; bit_pos < 64; bit_pos++) {
                        u64 mask = 1ULL << bit_pos;
                        if ((leftBond & mask) && (crnt & mask)) {
                            crnt += mask;
                            crnt &= ~(mask - 1);
                            is_valid = false;
                            break;
                        }
                    }
                    if (is_valid) break;
                }
                if (crnt > rightBound) {
                    cout << "-1\n";
                } else {
                    if (target_pos <= array_size - 2) {
                        cout << leftBond << "\n";
                    } else {
                        cout << crnt << "\n";
                    }
                }
            }
        }
    }
    return 0;
}