#include<iostream>
using namespace std;

class Node{
public:
int data;
Node *next;

Node(int data){
    this->data=data;
    this->next=NULL;
}

//destructor
~Node(){
    int value=this->data;
    //memory free
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
    cout<<"Memory is free for node with data "<<value<<endl;
}
};

void InsertAtHead(Node* &head, int d){
    //new node creation
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void InsertAtEnd(int d, Node* &tail){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void InsertAtMid(int d,int position,Node* &head){
    if(position==1){
        InsertAtHead(head,d);
        return;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    Node* nodetobeinserted=new Node(d);
    nodetobeinserted ->next=temp->next;
    temp->next=nodetobeinserted;
    //nodetobeinserted ->next=temp->next;---->(wrong)
}

void DeleteNode(int position,Node* &head){
    //deleting first or start node
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free 
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* current=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<=position-1){
            prev=current;
            current=current->next;
            cnt++;
        }
        prev->next=current->next;
        current->next=NULL;
        delete current;
    }

}

int main()
{//creation of new node 
Node* node1=new Node(10);
// cout<<node1->data<<endl;
// cout<<node1->next<<endl;

//head pointed to node 1:
Node* tail=node1;
Node* head=node1;

InsertAtEnd(12,tail);
InsertAtEnd(2,tail);
InsertAtHead(head,45);
InsertAtMid(43,2,head);
InsertAtMid(9967,4,head);
print(head);
DeleteNode(4,head);
print(head);
DeleteNode(5,head);
print(head);
DeleteNode(1,head);
print(head);
DeleteNode(2,head);
print(head);
    return 0;
}