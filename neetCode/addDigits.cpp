#include<bits/stdc++.h>
using namespace std;




int addDigits(int num) {
    int total =0;
    while (true)
    {
      total += num % 10; // Add the last digit to total
    }
    
}
int main() {
    int num;
    cin >> num; // Input the number
    cout << addDigits(num) << endl; // Output the result
    return 0;
}