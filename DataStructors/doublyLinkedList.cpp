#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node{ // A doubly Linked List that stores the previous address as well as the next address
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head; // Pointer to head node

struct Node* getNewNode(int inData){
    struct Node* newNode = new Node(); // Makes variable heap that is persistant unless freed
    newNode->data = inData;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void incertAtHead(int x){ // Makes new node and puts it at the beggining of the linked list
    struct Node* newNode = getNewNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void incert(int data, int pos){
    // Using 0 asd first node in list instead of 1
    Node* newNode = getNewNode(data);
    if(pos == 0){ // If you try and incert into the first possition it bassically dose the same as the incertBegining function
        incertAtHead(data);
        return;
    }
    Node* temp = head;
    for(int i=0; i<pos-1; i++){ // loop to the node before the one that you wanted to incert something to redirect it's pointer to the new one
        temp = temp->next; // And then just make the new node's pointer point to the node that used to be where you inserted the new one
    }
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;
    temp = newNode->next; // Sets the temp to the next node in the linked list
    temp->prev = newNode; // Sets the node after the new one to have their previous be the new node
}

void reversePrint(){
    struct Node* temp = head;
    if(temp == NULL)
        return;
    
    while(temp->next != NULL){ // Makes temp the last Node
        temp = temp->next;
    }

    cout << "Reverse: ";
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void print(){
    struct Node* temp = head;
    if(temp == NULL)
        return;

    cout << "Print: ";
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    head = NULL;
    incertAtHead(2); print(); reversePrint();
    incertAtHead(4); print(); reversePrint();
    incertAtHead(6); print(); reversePrint();

    incert(8, 2); print(); reversePrint();

    return 0;
}