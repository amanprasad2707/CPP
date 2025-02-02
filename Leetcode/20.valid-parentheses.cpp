/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {  // TC-> O(n) SC-> O(n)
public:
    bool isValid(string str) {
        stack<char> stk;
        for(int i = 0; i<str.size(); i++){
            if(str[i] == '(' || str[i] == '[' || str[i] == '{'){ // opening brackets
                stk.push(str[i]);
            }
            else{  // closing
                if(stk.size() == 0){
                    return false;
                }
                if((stk.top() == '(' && str[i] == ')') || 
                (stk.top() == '[' && str[i] == ']') || 
                (stk.top() == '{' && str[i] == '}')){
                    stk.pop();
                }
                else{
                    return false;
                }
            }

        }
        return stk.size() == 0;
    }
};
// @lc code=end

