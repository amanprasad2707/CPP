/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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

/* optimized approach */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL){
            fast = fast->next;
            if(fast != NULL){
                fast = fast->next;
            }
            slow = slow->next;
        }
        return slow;
    }
};


class Solution{  // time complexity -> O(n)
public:
  int getLength(ListNode *head){
    int len = 0;
    while (head != NULL){
      len++;
      head = head->next;
    }
    return len;
  }
  ListNode *middleNode(ListNode *head){
    int length = getLength(head);
    int mid = (length / 2);
    cout << "mid = " << mid << endl;
    ListNode *temp = head;
    int idx = 0;
    while (idx < mid && temp != NULL){
      temp = temp->next;
      idx++;
    }
    return temp;
  }
};

// @lc code=end
