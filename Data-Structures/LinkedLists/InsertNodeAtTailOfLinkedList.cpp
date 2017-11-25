/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node* nn = new Node();
    nn->data = data;

    if(head == NULL)
        return nn;
    else {
        Node* lastNode = head;
        while(lastNode->next != NULL) {
            lastNode = lastNode->next;
        }
        lastNode->next = nn;
        return head;
    }
}

/*
  Less elegant method

Node* Insert(Node *head,int data)
{
    if(head == NULL) {
        head = new Node();
        head->data = data;
        head->next = NULL;
    }
    else {
        Node* nn = head;
        while(nn->next != NULL)
            nn = nn->next;
        nn->next = new Node();
        nn->next->data = data;
    }
    return head;
}


*/
