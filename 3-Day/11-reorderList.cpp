class Solution {
public:
    void reorderList(ListNode* head) {
        
        if( !head ) return;
    
    ListNode* mid= head;
    ListNode* fast = head;

    while( fast && fast->next )
    {
        mid = mid->next;
        fast = fast->next->next;
    }
    
    ListNode* temp1 = mid->next;
	mid->next = NULL;
    ListNode* rev = NULL;
	while( temp1!=NULL )
    {
        ListNode* temp = temp1;
        temp1 = temp1->next;
        temp->next = rev;
        rev = temp;
    }        
           
    ListNode* temp2 = head;
 
    while( rev!=NULL) 
    {
        ListNode* next = rev->next;
        rev->next = temp2->next;
        temp2->next = rev;
        temp2 = temp2->next->next;
        rev = next;
    }
    
}
        
    
};