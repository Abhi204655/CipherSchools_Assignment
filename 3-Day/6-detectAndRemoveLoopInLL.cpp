class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode * slow = head;
        ListNode * fast = head;
        bool loop = false;
        while(fast && fast->next){
           fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
            { loop = true;
              break;  
            } 
           }
        if(loop)
        { fast=head;
        while(slow!=fast)
        {
            
           slow=slow->next;
            fast=fast->next;
            
            
            }
          slow->next=NULL;
         } 
        else
            return head;
        
    }
};
