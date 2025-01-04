

#include <iostream>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long start = 0;
        long end = 46341; // 2^31-1 square root

        long mid;
        while (start <= end) {
            mid = (start + end) / 2;

            long first_c = mid * mid;
            long second_c = (mid + 1) * (mid + 1);

            if (first_c <= x && x < second_c)
                return mid;
            else if (first_c > x)
                end = mid - 1;
            else if (x >= second_c)
                start = mid + 1;
        }
        return -1;
    }
};
// @lc code=end

// int main(){
//     Solution sol;
//     cout << sol.mySqrt(4);

//     return 0;
// }