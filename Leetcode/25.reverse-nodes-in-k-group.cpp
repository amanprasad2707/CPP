/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int cnt = 0;
        ListNode* temp = head;
        // check if k-nodes exists
        while(cnt < k){
            if(temp == NULL){
                return head;
            }
            cnt++;
            temp = temp->next;
        }
        // recursively call for rest of the linked list
        ListNode* prevNode = reverseKGroup(temp, k);

        // reverse current group
        temp = head; cnt = 0;
        while(cnt < k){
            ListNode* next = temp->next;
            temp->next = prevNode;
            prevNode = temp;
            temp = next;
            cnt++;
        }
        return prevNode;
    }
};
// @lc code=end

