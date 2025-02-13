/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
class Solution{ // time complexity -> O(n) space complexity -> O(1)
public:
    ListNode *reverseList(ListNode *head){ 
        ListNode *curr = head;
        ListNode *prev = NULL;
        ListNode *next = NULL;

        while (curr != NULL){
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        return prev;
    }
};

class Solution { // time and space complexity -> O(n)
public:
    void reverse(ListNode* &head, ListNode* curr, ListNode* prev){
        if(curr == NULL){
            head = prev;
            return;
        }
        ListNode* next = curr->next;
        curr->next = prev;
        reverse(head, next, curr);
    }
    
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        reverse(head, curr, prev);
        return head;
    }
};

class Solution {   // time and space complexity -> O(n)
public:
    ListNode* reverse(ListNode* curr, ListNode* prev) {
        if(curr == NULL){
            return prev;
        }
        ListNode* next = curr->next;
        curr->next = prev;
        return reverse(next, curr);
    }
    
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        return reverse(curr, prev);
    }
};

class Solution {   // time and space complexity -> O(n)
public:
    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    ListNode* reverseList(ListNode* head) {
        return reverse(head);
    }
};
// @lc code=end
