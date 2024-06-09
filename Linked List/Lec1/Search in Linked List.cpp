class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, struct Node* head, int key) {
        struct Node *temp = head;
        while(temp->next!=nullptr){
            if(temp->data==key)return true;
            temp=temp->next;}
        return false;
        // Code here
    }
};
