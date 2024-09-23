#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory free w data- "<<val<<endl;
    }
};

void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* &head){
    int cnt=0;
    Node* temp=head;

    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

void insertAtHead(int d,Node* &head,Node* &tail){
    //empty list
    if(head==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }

    else{
    Node* nodetobeinserted= new Node(d);
    nodetobeinserted->next=head;
    head->prev=nodetobeinserted;
    head=nodetobeinserted;
    }
}

void insertAtTail(int d,Node* &tail,Node* &head){
    //empty list
    if(tail==NULL){
        Node* temp=new Node(d);
        head=temp;
        tail=temp;
    }
    else{
    Node* nodetobeinserted=new Node(d);
    tail->next=nodetobeinserted;
    nodetobeinserted->prev=tail;
    tail=nodetobeinserted;
   }
 
}

void insertAtPosition(int pos,int d,Node* &head,Node* &tail){
     if(pos==1){
        insertAtHead(d,head,tail);
        return;
     }

     Node* temp=head;
     int cnt=1;
     while(cnt<pos-1){
        temp=temp->next;
        cnt++;
     }

     if(temp->next==NULL){
        insertAtTail(d,tail,head);
        return;
     }

     Node* nodetobeinserted=new Node(d);
     nodetobeinserted->next=temp->next;
     temp->next->prev=nodetobeinserted;
     nodetobeinserted->prev=temp;
     temp->next=nodetobeinserted;

}

void deleteNode(int pos,Node* &head){
   if(pos==1){
    Node* temp=head;
    temp->next->prev=NULL;
    head=head->next;
    temp->next=NULL;
    delete temp;
   }

   else{
    Node* curr=head;
    Node* prev=NULL;
    int cnt=1;
    while(cnt<pos){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    curr->next->prev=prev;
    curr->next=NULL;
    curr->prev=NULL;

   }

}

int main()
{Node* node1=new Node(10);
Node* head=node1;
Node* tail=node1;
insertAtHead(100,head,tail);
insertAtHead(200,head,tail);
insertAtHead(400,head,tail);
print(head);
insertAtTail(54,tail,head);
insertAtTail(799,tail,head);
insertAtPosition(3,9000,head,tail);
print(head);
deleteNode(4,head);
print(head);
deleteNode(1,head);
print(head);
cout<<getLength(head);

    return 0;
} 