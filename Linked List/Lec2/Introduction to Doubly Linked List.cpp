class Solution {
  public:
    Node* constructDLL(vector<int>& arr) {
        Node *head = new Node(arr.at(0));
        Node *n = head;
        for(int i=1;i<arr.size();i++){
            Node *nn = new Node(arr.at(i));
            n->next = nn;
            nn->prev = n;
            n = nn;
        }
        return head;
        // code here
    }
};
