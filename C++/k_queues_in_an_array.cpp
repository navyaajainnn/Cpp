#include<iostream>
#include<queue>
using namespace std;

class kQueue{
    int k;
    int n;
    int *arr;
    int *front;
    int *rear;
    int *next;
    int freeSpot;
   public:
   kQueue(int n,int k){
    this->n=n;
    this->k=k;
    front=new int[k];
    rear=new int[k];
    for(int i=0;i<k;i++){
        front[i]=-1;
        rear[i]=-1;
    }
    arr=new int[n];
    next=new int[n];
    for(int i=0;i<n;i++){
        next[i]=i+1;
    }
    next[n-1]=-1;
    freeSpot=0;
   }

   void enqueue(int x,int qn){
      if(freeSpot==-1){
        cout<<"OVERFLOW"<<endl;
      }

      //find index
      int index=freeSpot;
      freeSpot=next[index];

      if(front[qn-1]==-1){
        front[qn-1]=index;
      }
      else{
        next[rear[qn-1]]=index;
      }

      //update next
      next[index]=-1;

      //update rear
      rear[qn-1]=index;
      arr[index]=x;
   }

   int dequeue(int qn){
    if(freeSpot==0){
        cout<<"Underflow"<<endl;
        return -1;
    }

    int index=front[qn-1];
    front[qn-1]=next[index];
    next[index]=freeSpot;
    freeSpot=index;
    return arr[index];
   }
};

int main()
{ kQueue q(10,3);
q.enqueue(10,1);
q.enqueue(1000,1);
q.enqueue(300,2);
q.enqueue(70,2);
cout<<q.dequeue(2);
    return 0;
}