#include <iostream>
#include <vector>
using namespace std;

bool is_digit(string str){
    return (atoi(str.c_str()) != 0) || (str == "0");
}

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> space;
        
        for(auto c : operations){
            if(is_digit(c)) space.push_back(atoi(c.c_str()));
            else if (c == "C") space.pop_back();
            else if (c == "D") space.push_back( space.back() * 2 );
            else if (c == "+") space.push_back( space.back() + space[space.size()-2] );
            else{}
        }
        
        int sum = 0;

        for(auto c : space){
            sum += c;
        }
        return sum;
    }
};
