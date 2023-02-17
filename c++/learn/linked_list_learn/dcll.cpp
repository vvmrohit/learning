#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = NULL;
        prev = NULL;
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
    
    return 0;
}