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
    ListNode* rev(ListNode* curr){
        if(curr == NULL || curr->next == NULL) return curr;
        ListNode* N , *prev ;
        prev = NULL;
        while(curr != NULL){
            N = curr->next;
            curr->next = prev;
            prev = curr;
            curr = N;
        }
        
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head , *fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(fast){
            slow = slow->next;
        }
        ListNode* backward = rev(slow);
        
        while(backward){
            if(head->val != backward->val) return false;
            head = head->next;
            backward = backward->next;
           
        }
        
        return true;
        
    }
        
};