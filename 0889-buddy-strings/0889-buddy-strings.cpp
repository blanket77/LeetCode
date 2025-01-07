class Solution {
public:
    bool buddyStrings(string s, string goal) {
        // if string length of two letters are different, return false 
        if(s.length() != goal.length() || s.length() == 1 ) return false;

        // if two letters are same, return true
        if(s == goal) {
            set<char> unique_char(s.begin(), s.end());
            return unique_char.size() < s.size();
        }
        
        int dif = 0;
        int first_idx = -1;
        int second_idx = -1;

        for(int i = 0 ; i < s.length() ; i++){
            // Compares each character in two string and if there are more than 2 differences, it is false. 
            if(s[i] != goal[i]) {
                dif++;
                if (dif > 2) return false;
                if(first_idx == -1) first_idx = i;
                else second_idx = i; 
            }
        }
        if(dif != 2) return false;

        // Compares each character in two string, if there are two difference and When Change two index, There are same, then it is true.
        char tmp;
        tmp = s[first_idx]; s[first_idx] = s[second_idx];  s[second_idx] = tmp; 

        if(s == goal) return true;
        else return false;
    }
};