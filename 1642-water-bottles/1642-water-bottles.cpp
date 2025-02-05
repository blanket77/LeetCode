/*
 * @lc app=leetcode id=1518 lang=cpp
 *
 * [1518] Water Bottles
 *
 * https://leetcode.com/problems/water-bottles/description/
 *
 * algorithms
 * Easy (71.02%)
 * Likes:    1719
 * Dislikes: 138
 * Total Accepted:    250.2K
 * Total Submissions: 352.8K
 * Testcase Example:  '9\n3'
 *
 * There are numBottles water bottles that are initially full of water. You can
 * exchange numExchange empty water bottles from the market with one full water
 * bottle.
 * 
 * The operation of drinking a full water bottle turns it into an empty
 * bottle.
 * 
 * Given the two integers numBottles and numExchange, return the maximum number
 * of water bottles you can drink.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: numBottles = 9, numExchange = 3
 * Output: 13
 * Explanation: You can exchange 3 empty bottles to get 1 full water bottle.
 * Number of water bottles you can drink: 9 + 3 + 1 = 13.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: numBottles = 15, numExchange = 4
 * Output: 19
 * Explanation: You can exchange 4 empty bottles to get 1 full water bottle. 
 * Number of water bottles you can drink: 15 + 3 + 1 = 19.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= numBottles <= 100
 * 2 <= numExchange <= 100
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum = 0;
        sum += numBottles;
        int drink = 0;

        while( (drink = numBottles / numExchange) != 0 ){
            numBottles = drink + numBottles % numExchange;
            sum += drink;
        }

        return sum;
    }
};
// @lc code=end

