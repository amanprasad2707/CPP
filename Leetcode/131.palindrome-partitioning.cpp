/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */
#include<iostream>
#include<vector>
using namespace std;
int main(){
cout << "testing" << endl;
return 0;
}

// @lc code=start

/* O(n * 2ⁿ) */
class Solution {
public:
    bool isPalindrome(string s){
        for(int i = 0; i < s.length(); i++){
            if(s[i] != s[s.length()-1 - i]){
                return false;
            }
        }
        return true;
    }
    void getPartitions(string s, vector<string>& partitions, vector<vector<string>>&ans){
        if(s.size() == 0){
            ans.push_back(partitions);
            return;
        }
        for(int i = 0; i<s.size(); i++) {
            string part = s.substr(0, i+1);
            if(isPalindrome(part)){
                partitions.push_back(part);
                getPartitions(s.substr(i+1), partitions, ans);
                partitions.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> partitions;
        getPartitions(s, partitions, ans);
        return ans;
    }
};
// @lc code=end

