class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_num = 0;
        int index = 0;

        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] == 0){
                zero_num++;
            }
            else{
                nums[index++] = nums[i];
            }
        }
        for(int i = 0 ; i < zero_num; i++){
            nums[index++] = 0; 
        }
    }
};