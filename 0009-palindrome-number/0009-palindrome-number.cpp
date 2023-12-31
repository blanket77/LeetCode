#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string num_s = to_string(x);
        string rever_num_s = num_s;
        reverse(rever_num_s.begin(),rever_num_s.end());

        return (num_s == rever_num_s);
        
    }
};