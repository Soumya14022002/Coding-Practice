class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) 
    {
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            delete head;
            return NULL;
        }
        int count=0;
        ListNode* current=head;
        while(current!=NULL)
        {
            current=current->next;
            count++;
        }
        current=head;
        int mid=count/2;
        while(mid-->1)
        {
            current=current->next;
        }
        current->next=current->next->next;
        current=head;
        return current;
    }
};
