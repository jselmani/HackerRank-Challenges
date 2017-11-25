/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
// recursively call function until it reaches a NULL value, where it will then
// print the value of the data from the back to front of list.
void ReversePrint(Node *head)
{
  // This is a "method-only" submission.
  // You only need to complete this method.
    if(head == NULL)
        return;

    ReversePrint(head->next);
    cout << head->data << endl;
}
