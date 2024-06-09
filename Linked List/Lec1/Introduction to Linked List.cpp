class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        Node *head = new Node(arr.at(0));
        Node *temp = head;
        for(int i=1;i<arr.size();i++){
            Node *nn = new Node(arr.at(i));
            temp->next = nn;
            temp = nn;
        }
        return head;
        // code here
    }
};
