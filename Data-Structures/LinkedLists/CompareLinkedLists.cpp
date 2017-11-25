/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission.
  // You only need to complete this method
  
    //check if equal right from the start
    if(headA == NULL && headB == NULL)
        return 1;
    if(headA == NULL || headB == NULL)
        return 0;

    int eq = 1;

    Node* lastA = headA;
    Node* lastB = headB;

    //loop and determine if equal
    while(lastA->next != NULL) {
        //if lastB->next is NULL, eq is 0
        if(lastB ->next == NULL) {
            eq = 0;
            break;
        }
        //check values stored in each
        if(lastA->data != lastB->data) {
            eq = 0;
            break;
        }
        lastA = lastA->next;
        lastB = lastB->next;
    }
    //check the last nodes data for equality
    if(lastA->data != lastB->data || lastB->next != NULL)
        eq = 0;

    return eq;
}
