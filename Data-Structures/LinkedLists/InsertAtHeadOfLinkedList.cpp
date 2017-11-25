/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node* nn = new Node();
    nn->data = data;

    if(head != NULL)
        nn->next = head;

    return nn;
}

/*
  Less elegant method

Node* Insert(Node *head,int data)
{
  // Complete this method
    if(head == NULL) {
        head = new Node();
        head->data = data;
        head->next = NULL;
        return head;
    }
    else {
        Node* nn = new Node();
        nn->data = data;
        nn->next = head;
        return nn;
    }
}
*/
