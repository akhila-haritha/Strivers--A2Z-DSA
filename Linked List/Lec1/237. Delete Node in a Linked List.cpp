class Solution {
public:
    void deleteNode(ListNode* node) {
        if(node->next->next==nullptr){
            node->val = node->next->val;
            node->next=nullptr;
            return;}
        node->val = node->next->val;
        deleteNode(node->next);
        
    }
};
