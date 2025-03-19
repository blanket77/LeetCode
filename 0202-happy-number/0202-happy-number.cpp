class Solution {
public:
    bool isHappy(int n) {
        for(int i = 1 ; i <= n ; i++){
            string num = to_string(i);
            long long sum = 0;
            for(auto sub : num){
                sum += pow(sub - '0', 2);
            }
            if(sum == 1) return true;
        }
        return false;
    }
};