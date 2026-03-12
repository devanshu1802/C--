#include<iostream>
using namespace std;

struct Node{
    char data;
    Node* next;
    Node* prev;
};

int main(){
    Node* head = NULL;
    Node* newNode;
    Node* temp;

    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;

    for(int i=0; i<n; i++){
        newNode = new Node();
        cout<<"Enter data for the node: ";
        cin>>newNode->data;

        if(head == NULL){
            head = newNode;
            newNode->next = head;
            newNode->prev = head;
        }
        else{
            temp = head;

            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;

            newNode->next = head;
            head->prev = newNode;
        }
    }

    if(head == NULL){
        cout<<"List is empty";
    }
    else{
        temp = head->prev;
        cout<<"Backward Traversal: ";
        do{
            cout<<temp->data<<" ";
            temp = temp->prev;
        }while(temp != head->prev);
    }
    return 0;
}