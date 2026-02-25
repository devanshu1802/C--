#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
// Deleting the element at the beginning of the LL
Node* deleteAtBeginning(Node* START){
    Node* temp = START;
    START = START->next;
    delete temp;
    return START;
}
// Creating Linked List 
int main(){
Node* first = new Node();
Node* second = new Node();
Node* third = new Node();

first->data = 10;
second->data = 20;
third->data = 30;

first->next = second;
second->next = third;
third->next = NULL;

Node* START = first;
// Adding a new element in the beginning of the LL
Node* NEWNODE = new Node();
NEWNODE-> data = 5;
NEWNODE-> next = START;
START = NEWNODE;

Node* temp = START;

cout << "Original linked list = ";
while(temp != NULL){
    cout <<temp->data << " ->";
    temp = temp->next;
}
cout << endl;

cout << "After deleting the element = ";
START = deleteAtBeginning(START);
temp = START;
while(temp != NULL){
    cout <<temp->data << " ->";
    temp = temp->next;
}

return 0;
}