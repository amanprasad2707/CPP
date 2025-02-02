/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
class Solution1 {  // TC-> O(n) SC->(n)
public:
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int start = 0;
        int end = arr.size()-1;
        cout << "start: " << start << "  end: " << end << endl;
        while(start < end){
            if(arr[start] != arr[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
class Solution {  // TC-> O(n) SC->(1)
private:
    ListNode* getmiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast != NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* next = NULL;
        ListNode* prev = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL){
            return true;
        }
        // step 1: find middle
        ListNode* mid = getmiddle(head);
        // step 2: reverse mid after middle
        ListNode* temp = mid->next;
        mid->next = reverse(temp);
        // step 3: check for palindrome and compare both half
        ListNode* head1 = head;
        ListNode* head2 = mid->next;
        while(head2 != NULL){
            if(head1->val != head2->val){
                return false;
            }else{
                head1 = head1->next;
                head2 = head2->next;
            }
        }
        // step 4: reverse again the list to become the same as original list
        reverse(mid->next);
        return true;
    }
};
// @lc code=end

