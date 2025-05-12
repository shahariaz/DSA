#include <iostream>
#include <string>

int main() {
  
    int t;
    std::cin >> t;
    

    const std::string reference = "codeforces";
   
    while (t--) {
       
        std::string s;
        std::cin >> s;
        
        
        int diff_count = 0;
        for (int i = 0; i < 10; ++i) {
            if (s[i] != reference[i]) {
                ++diff_count;
            }
        }
       
        std::cout << diff_count << std::endl;
    }
    
    return 0;
}