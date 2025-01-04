/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long start = 1;
        long long end = n;
        long long mid = 0;
        int res;

        while(start <= end){
            mid = (start+end)/2;
            res = guess(mid);

            if(res == 1) start = mid + 1;
            else if(res == -1) end = mid - 1;
            else return mid;
        }
        return n;
    }
};