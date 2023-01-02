class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* f=head,*s=head;
        for(int i=0;i<n;i++)
        {
            f=f->next;
        }
        if(!f) return head->next;
        while(f->next) f=f->next,s=s->next;
        s->next=s->next->next;
        return head;
    }
};
