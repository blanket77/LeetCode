class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxs = 0;
        for (int i = 0; i < s.size(); i++) {
            string substr = "";
            for (int j = i; j < s.size(); j++) {
                if (substr.find(s[j]) == string::npos) {
                    substr += s[j];
                } else {
                    maxs = max(maxs, (int)substr.size());
                    break;
                }
            }
            // 루프가 끝났는데 break 없이 끝났을 수도 있으니 여기서도 max 확인
            maxs = max(maxs, (int)substr.size());
        }
        return maxs;
    }
};