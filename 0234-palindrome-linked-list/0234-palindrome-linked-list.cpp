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
    bool isPalindrome(ListNode* head) {
        stack<int> s;        
        ListNode* h= head;

        for(h; h != NULL ; h = h->next){
            s.push(h->val);
        }
        h = head;
        int n = s.size()/2;
        for(int i = 0 ; i < n; i++){
            if(s.top() != h->val){
                return false;
            }
            h = h->next;
            s.pop();
        }
        return true;
    }
};