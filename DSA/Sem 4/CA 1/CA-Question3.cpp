#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head = NULL;

    Node* newNode1 = new Node();
    newNode1->data = 10;
    newNode1->next = head;
    head = newNode1;

    Node* newNode2 = new Node();
    newNode2->data = 20;
    newNode2->next = head;
    head = newNode2;

    Node* newNode3 = new Node();
    newNode3->data = 30;
    newNode3->next = head;
    head = newNode3;

    cout << "Linked List that we have created: " << endl;
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}