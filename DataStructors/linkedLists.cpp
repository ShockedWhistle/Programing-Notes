#include <iostream>
#include <stdio.h>

using namespace std;

void incertBegining(Node** headPoint, int x){ // Takes a pointer of a pointer, the pointer to the head pointer, so we can still change it
    // Makes a new node that is now the fist in the list and will replace the first if needed
    Node* temp = (Node*)malloc(sizeof(struct Node)); // Just use new Node() instead 
    temp->data = x;
    temp->next = *headPoint; // Dereferances the pointer to the head pointer for changing the data stored at the pointer
    *headPoint = temp;

}

void incert(Node** headPoint, int data, int pos){
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(pos == 0){ // If you try and incert into the first possition it bassically dose the same as the incertBegining function
        temp->next = *headPoint;
        *headPoint = temp;
        return;
    }
    Node temp1 = *headPoint;
    for(int i=0; i<pos-2; i++){ // loop to the node before the one that you wanted to incert something to redirect it's pointer to the new one
        temp1 = temp1->next; // And then just make the new node's pointer point to the node that used to be where you inserted the new one
    }
    temp->next = temp1->next;
    temp1->next= temp;
}

void deleteNode(Node** headPoint, int pos){
    
}

void print(Node* head){
    cout << "List is: ";
    while(head!= NULL){ // Cycles through the list starting at the address of the head
        cout << head->data;
        head = head->next;
    }
    cout << endl;
}

void incertingBeginning(){
    struct Node {
        int data;
        struct Node* next;
    }
    struct Node* head; // In c++ you don't need to do the struct thats for C
    head = NULL;
    incertBegining(&head, 1); // Gives a pointer to the head pointer and the int 1

}

int main(){

    struct Node{ // Creates a node that holds an integer and a pointer to the next Node in the list
        int data;
        Node * link; // People also name this next
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
