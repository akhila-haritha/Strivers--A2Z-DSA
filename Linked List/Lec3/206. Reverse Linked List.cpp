class Solution {
public:
ListNode* reverseList(ListNode* head) {
        if(head==nullptr||head->next==nullptr)return head;
        ListNode* p = head->next;
        head->next = reverseList(head->next);
        p->next = head;
        ListNode *s = head;
        head=head->next;
        
        s->next = nullptr;
        return head;
        
    }
    
       
};
