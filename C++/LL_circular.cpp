#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor 
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    //destructor
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail,int element,int d){
    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non empty list
        //assuming element is present

        Node* curr=tail;
        while(curr->data!=element){
            curr=curr->next;
        }
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node* &tail){
  Node* temp=tail;
  if(tail==NULL){
    cout<<"Empty list";
    return;
  }
  do{
    cout<<tail->data<<" ";
    tail=tail->next;
  }while(tail!=temp);
  cout<<endl;
}

void deleteNode(Node* &tail,int value){
    //empty list
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else{
        Node* prev=tail;
        Node* curr=tail->next;

        while(curr->data!=value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;

        //1 node LL
        if(curr==prev){
            tail=NULL;
        }
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

int main()
{ 
Node* tail=NULL;
insertNode(tail,5,3);
print(tail);

insertNode(tail,3,5);
print(tail);

insertNode(tail,5,7);
print(tail);

insertNode(tail,7,9);
print(tail);

insertNode(tail,5,6);
print(tail);

insertNode(tail,3,4);
print(tail);

deleteNode(tail,4);
print(tail);

deleteNode(tail,7);
print(tail);

deleteNode(tail,3);
print(tail);
    return 0;
}