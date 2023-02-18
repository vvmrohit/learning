#include<iostream>

using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
    }
};
void printLl(Node *head){
    while(head!=NULL){
        cout << head ->data << " ";
        head = head->next;
    }
    cout << "\n";
}
Node* append(Node *head, int x){
    Node* temp = new Node(x);
    if(head==NULL)
        return temp;
    Node* curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr ->next = temp;
    return head;
}

Node* sortedInsert(Node* head,int x){
    Node* temp = new Node(x);
    if(head==NULL)
        return temp;
    Node * curr = head;
    if(curr->data>x){
        temp->next = curr;
        return temp;
    }
    while(curr->next!=NULL && curr->next->data<x){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;

}

int main(){
    Node *head = NULL;
    cout << "Enter number of elemnets to be inserted ";
    int n;
    cin >> n;
    cout << "Enter number to be appended ";
    int k;
    for(int i=0;i<n;i++){
        cin >> k;
        head = append(head,k);
    }
    printLl(head);
    head = sortedInsert(head,60);
    printLl(head);
    return 0;
}