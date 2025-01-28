/*
 * @lc app=leetcode id=142 lang=cpp
 *
 * [142] Linked List Cycle II
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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, bool> visited;
        ListNode* temp = head;
        while(temp != NULL){
            if(visited[temp] == true){
                return temp;
            }
            visited[temp] = true;
            temp = temp->next;
        }
        return NULL;
    }
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                isCycle = true;
                break;
            }
        }
        if(!isCycle){
            return NULL;
        }
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
// @lc code=end

