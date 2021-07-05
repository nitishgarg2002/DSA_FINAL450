#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Stack {
    int top;
    int cap;
   
    public:
    
     Stack() {
        top=-1;
        cap=10;
    }
     int arr[10];
    
    int push(int x) {
        if(top==cap-1){
            return -1;
        }
        else {
            top++;
            arr[top]=x;
            return 1;
        }
    }
    int pop() {
        if(top==cap-1){
            return -1;
        }
        else {
          int  res=arr[top];
            top--;
            return 1;
        }
    }
    bool isFull() {
        if(top==cap-1)
        return 1;
        return 0;
    }
    bool isEmpty() {
        if(top==-1){
            return 1;
        } else{
            return 0;
        }
    }
    int stackTop() {
        if(top<0){
            return -1;
        } else {
            int res = arr[top];
            return res;
        }
    }
};

int main() {
    class Stack st;
    cout<<st.push(10)<<endl;
    cout<<"Popped"<<st.pop()<<"\n";
    cout<<"isFull  "<<st.isFull();
    return 0;
}