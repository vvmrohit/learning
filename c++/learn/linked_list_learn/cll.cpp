#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void display(Node * head){
    Node * curr = head;
    if(head==NULL)
        return;
    while(curr->next!=head){
        cout << curr->data << " ";
        curr = curr ->next;
    }
    cout << curr->data << " \n";
}

Node* appendatend(Node* head,int x){
    Node* temp = new Node(x);
    if(head==NULL){
        temp->next = temp;
        return temp;
    }
    Node * curr = head;
    while(curr->next!=head){
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;
    return head;
}

Node* insertAtFirstPos(Node* head,int x){
    if(head==NULL){
        return NULL;
    }
    Node* temp = new Node(x);
    Node * curr = head;
    temp->next = curr->next;
    curr->next = temp;
    swap(curr->data,temp->data);
    return head;
}
Node* deleteHeadElement(Node *head){
    if(head==NULL)
        return NULL;
    Node *curr = head;
    if(curr->next == head){
        delete(head);
        return NULL;
    }
    while(curr->next !=head){
        curr = curr->next;
    }
    curr->next = head->next;
    delete(head);
    return curr->next;
}

Node* insertAtEndPos(Node * head,int x){
    if(head==NULL){
        return NULL;
    }
    Node* temp = new Node(x);
    Node * curr = head;
    while(curr->next!=head){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}



int main(){
    Node* head = NULL;
    cout << "Enter number of elemnets to be inserted ";
    int n;
    cin >> n;
    cout << "Enter number to be appended ";
    int k;
    for(int i=0;i<n;i++){
        cin >> k;
        head = appendatend(head,k);
    }
    display(head);
    /*head = insertAtFirstPos(head,170);
    display(head);
    head = insertAtEndPos(head,250);
    display(head);*/
    head = deleteHeadElement(head);
    display(head);
    return 0;
}