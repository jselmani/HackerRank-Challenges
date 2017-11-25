/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node* prev = NULL;
    Node* nn = head;
    int pos = 0;

    if(position == 0) {
        head = head->next;
        delete nn;
    }
    else {
        while(position != pos) {
            ++pos;
            prev = nn;
            nn = nn->next;
        }
        if(nn != NULL) {
            prev->next = nn->next;
            delete nn;
        }
    }
    return head;
}
