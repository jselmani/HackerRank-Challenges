/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
    Node* nn = new Node();
    nn->data = data;

    if(head == NULL)
        return nn;
    else {
        Node* lNode = head;
        int pos = 0;

        if(position == 0) {
            nn->next = head;
            return nn;
        }

        while(lNode != NULL) {
            if(pos == position - 1) {
                nn->next = lNode->next;
                lNode->next = nn;
            }
            else
                lNode = lNode->next;

            pos += 1;
        }

        return head;
    }
}
