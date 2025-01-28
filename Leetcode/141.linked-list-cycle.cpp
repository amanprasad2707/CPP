/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution1 {
public:
    bool hasCycle(ListNode *head) {
        unordered_map<ListNode*, bool> visited;
        ListNode* temp = head;
        while(temp != NULL){
            if(visited[temp] == true){
                return true;
            }
            visited[temp] = true;
            temp = temp->next;
        }
        return false;
    }
};
// Floyd cycle detection
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow){
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

