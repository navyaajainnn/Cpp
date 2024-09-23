#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
       if(top>=0){
        top--;
       }
       else{
        cout<<"Stack underflow";
       }
    }

    int peek(){
       if(top>=0){
        return arr[top];
       }
       else{
        cout<<"Stack is empty "<<endl;
        return -1;
       }
    }

    bool isEmpty(){
     if(top==-1){
        return true;
     }
     else{
        return false;
     }
    }
};

int main()
{/*
    //creation of stack
    stack<int>s;
    //push
    s.push(2);
    s.push(4);
    s.push(8);
    //pop
    s.pop();
    cout<<"Top element: "<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }

    cout<<s.size()<<endl;
    */
   Stack st(5);
   st.push(45);
   st.push(78);
   st.push(90);
   st.push(222);
   cout<<st.peek()<<endl;
   st.pop();
   cout<<st.peek()<<endl;
   st.pop();
   cout<<st.peek()<<endl;
   st.pop();
   cout<<st.peek()<<endl;
   st.pop();
   cout<<st.peek()<<endl;
    return 0;
}