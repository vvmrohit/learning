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

int main(){
    Node* head = NULL;
    
    return 0;
}