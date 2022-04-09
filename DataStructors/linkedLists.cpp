#include <stdio.h>

using namespace std;

int main(){

    struct Node{ // Creates a node that holds an integer and a pointer to the next Node in the list
        int data;
        Node * link;
    };

    Node * A; // Empty list This points to the head Node for the linked list
    A = NULL; // Defines the initial pointer to the Head Node as NULL

    // The first Node in the linked list
    Node * temp = new Node();  // This is another way of doing this for C  Node * temp = (Node*)malloc(sizeof(Node));
    temp -> data = 2; // The -> is the equivalent yo doing (*temp).data 
    temp -> link = NULL;
    A = temp;

    temp = new Node();
    temp -> data = 4;
    temp -> link = NULL;

    Node* temp1 = A;
    while(temp1 -> link != NULL){ // Loops through the Linked List until it reaches the last vartriable in it which always has the NULL pointer
        temp1 = temp1 -> link;
    }
    temp1 -> link = temp;


    return 0;
}
