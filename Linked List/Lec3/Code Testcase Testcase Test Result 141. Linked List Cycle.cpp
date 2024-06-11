class Solution {
public:
    bool hasCycle(ListNode *head) {

        if(head==nullptr || head->next==nullptr)return false;
        ListNode *p = head, *ptr = head->next;
        while(ptr!=nullptr && ptr->next!=nullptr){
            if(p==ptr)return true;
            p=p->next;
            ptr=ptr->next->next;}
        return false;
        
        
    }
};
