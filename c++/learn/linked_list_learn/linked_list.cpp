#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
    }
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

// To append elemetns in last of linked_list
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
// To insert element at a given position in linked_list
Node* insertAfter(Node *head, int x,int pos){
    Node *temp = new Node(x);
    if(head==NULL){
        return temp;
    }
    if(pos==1){
        temp ->next = head;
        return temp;
    }
    int n = sizeOfLl(head);
    if(pos>n+1){
        cout << "Wrong positon specified\n";
        return head;
    }
    if(pos==n){
        return append(head,x);
    }
    int k = 1;
    Node* curr = head;
    while(k+1<pos){
        curr = curr->next;
        k++;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

// To delete first_element of linked_list
Node* deleteFirstNode(Node * head){
    if(head==NULL)
        return NULL;
    if(head->next==NULL){
        delete(head);
        return NULL;
    }
    Node * curr = head;
    head = head->next;
    delete(curr);
    return head;
}

//To delete the last elemnt of linked_list
Node* popLastElement(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete(head);
        return NULL;
    }
    Node* curr = head;
    while(curr->next->next !=NULL){
        curr = curr->next;
    }
    delete(curr->next);
    curr->next = NULL;
    return head;
}

// To print linked_list elements
void printLl(Node *head){
    while(head!=NULL){
        cout << head ->data << " ";
        head = head->next;
    }
    cout << "\n";
}

// To reverse print the element of Linked_List
void revPrintLl(Node *head){
    if(head==NULL)
        return;
    revPrintLl(head->next);
    cout << head->data << " ";
    
}
Node* middleElemnet(Node*head){
    if(head==NULL)
        return NULL;
    Node*curr = head;
    Node* mid = head;
    while(curr!=NULL && curr->next!=NULL){
        curr = curr->next->next;
        mid = mid->next;
    }
    return mid;
}
Node* nthElementFromEnd(Node* head,int n){
    if(head==NULL)
        return NULL;
    Node* curr = head;
    Node* res = head;
    while(curr!=NULL && n--){
        curr = curr->next;
    }
    if(curr==NULL && n!=0)
        return NULL;
    
    while(curr!=NULL){
        curr = curr->next;
        res = res ->next;
    }
    return res;
}

Node* reverse(Node*head){
    if(head==NULL)
        return NULL;
    Node* curr = head;
    while(curr->next!=NULL){
        
    }
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
    /*Node *mid = middleElemnet(head);
    if(mid!=NULL){
        cout << mid->data << " ";
    }*/ 
    Node* res = nthElementFromEnd(head,3);
    if(res!=NULL){
        cout << res->data << " ";
    }


    /*head = deleteFirstNode(head);
    printLl(head);
    head = popLastElement(head);
    printLl(head);
    head =insertAfter(head,90,1);
    printLl(head);*/

    return 0;
}
