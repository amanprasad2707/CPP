/*
 * @lc app=leetcode id=24 lang=cpp
 *
 * [24] Swap Nodes in Pairs
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
class Solution {  // TC->O(n)
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* prev = NULL;

        while(first != NULL && second != NULL){
            ListNode* third = second->next;
            second->next = first;
            first->next = third;
            if(prev != NULL){
                prev->next = second;
            }
            else{
                head = second;
            }

            // update
            prev = first;
            first = third;
            if(third != NULL){
                second = third->next;
            }
            else{
                second = NULL;
            }
        }
        return head;
    }
};
// @lc code=end

