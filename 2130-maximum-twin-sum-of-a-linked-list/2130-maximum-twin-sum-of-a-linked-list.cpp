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
    int pairSum(ListNode* head) {
        int size = 0;
        ListNode* h = head;
        while(h){
            size++;
            h = h->next;
        }        
        h = head;
        vector<int> v;
        int i = 0; 
        for(i ; i < size/2; i++){
            v.push_back(h->val);
            h = h->next;
        }
        for(i ; i < size; i++){
            v[size - 1 - i ] += h->val;
            h = h->next;
        }
        sort(v.begin(), v.end());
        return v.back();
    }
};