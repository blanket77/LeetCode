class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* answer = new ListNode(0);
        ListNode* head = answer;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr){
            int sum = carry;
            if(l1 != nullptr){
                sum += l1->val;
                l1 = l1->next;
            }  
            
            if(l2 != nullptr){
                sum += l2->val;
                l2 = l2->next;
            }

            if(sum  > 9){
                sum = sum % 10;
                carry = 1;
            }
            else{
                carry = 0;
            }    

            head->next = new ListNode(sum);
            head = head->next;
        }

        if(carry == 1){
            head->next = new ListNode(1);
        }

        return answer->next;
    }
};