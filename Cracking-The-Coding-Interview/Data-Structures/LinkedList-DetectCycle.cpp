/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

// use floyd's cycle detection algorithm (tortoise and hare approach)
bool has_cycle(Node* head) {
    Node* tortoise = head;
    Node* hare = head;

    while(hare != NULL && hare->next != NULL) {
        tortoise = tortoise->next;
        hare = hare->next->next;
        //if tortoise has caught up the hare, list is cycled
        if(tortoise == hare)
            return true;
    }
    //hare won the race, reached end of the list
    return false;
}
