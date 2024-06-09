class Solution{
  public:
  Node *head;
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        Node *nn = new Node(x);
        nn->next = head;
        head = nn;
        return head;
       // Your code here
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        
        Node *nn = new Node(x);
        if(head==nullptr){
            head =nn;
            return head;
        }
        Node *temp = head;
        while(temp->next!=nullptr){
            temp=temp->next;}
        temp->next = nn;
        nn->next = nullptr;
        return head;
       // Your code here
    }
};
