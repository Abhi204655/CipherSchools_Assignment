
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * temp =head;
        while(temp&&temp->next)
        {
            while((temp->next)&&(temp->val==temp->next->val))
            {
                ListNode * del = temp->next;
                temp->next=temp->next->next;
                delete del;
                
            }
            temp=temp->next; 
        }
       return head; 
    }
};