void addNode(Node *head, int pos, int data)
{
    if(head==nullptr)return;
    if(pos==0){
        Node *nn = new Node(data);
        Node *temp;
        if(head->next!=nullptr){temp = head->next;
        nn->next = temp;
        temp->prev = nn;}
        
        head->next = nn;
        nn->prev= head;
        
        return ;
    }
    addNode(head->next, pos-1,data);
   // Your code here
}
