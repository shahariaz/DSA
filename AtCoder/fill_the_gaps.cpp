#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) { 
        if (arr[i] < arr[i + 1] && (arr[i+1]-arr[i])>1) {
            for (int j = arr[i]; j < arr[i + 1]; j++) {
                cout << j << endl;
            }
        } else if (arr[i] > arr[i + 1]   && (arr[i]-arr[i+1])>1 ) {
            for (int j = arr[i]; j > arr[i + 1]; j--) {
                cout << j << endl;
            }
        }else{
          cout <<arr[i];
        }
    }
    

    return 0;
}
