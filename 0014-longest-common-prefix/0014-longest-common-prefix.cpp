#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            string answer = "";
            int idx = 0;
            while(true){
                char is_common = strs[0][idx]; 
                for(auto str : strs){
                    // if length is over than idx or It's diffent is_common, function end
                    if(str.length() == idx){
                        return answer;
                    }
                    if(str[idx] != is_common){
                        return answer;
                    } 
                }
                //if you exit the for loop, It mean that is_common is all in strs
                answer += is_common;

                idx++;
            }
            return answer;
    }
};
