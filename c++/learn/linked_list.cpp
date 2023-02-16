#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};

// To print the size of linked_list
int sizeOfLl(Node *head){
    int n = 0;
    Node *curr = head;
    while(curr!=NULL){
        n++;
        curr = curr->next;
    }
    return n;
}


// To insert element at a given position in linked_list
Node* insertAfter(Node *head, int x,int pos){
    Node *temp = NULL;
    temp ->data = x;
    if(pos==1){
        temp ->next = head;
        return temp;
    }
    if(pos>=sizeOfLl(head)+1){
        cout << "Wrong position";
        return head;
    }
    int n=0;
    
    
    return head;
}

// To append elemetns in last of linked_list
Node* append(Node *head, int x){
    Node* temp = new Node;
    temp->data = x;
    temp ->next = NULL;
    if(head==NULL)
        return temp;
    Node* curr = head;
    while(curr->next!=NULL){
        curr = curr->next;
    }
    curr ->next = temp;
    return head;
}

// To delete first_element of linked_list
Node* deleteFirstNode(Node * head){
    if(head==NULL)
        return;
    if(head->next==NULL){
        delete(head);
        return NULL;
    }
    Node * curr = head;
    curr = curr ->next;
    delete(head);
    return curr;
}

// To print linked_list elements
void printLl(Node *head){
    while(head!=NULL){
        cout << head ->data << " ";
        head = head->next;
    }
}

// To reverse print the element of Linked_List
void revPrintLl(Node *head){
    if(head==NULL)
        return;
    revPrintLl(head->next);
    cout << head->data << " ";
    
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
    
    return 0;
}
