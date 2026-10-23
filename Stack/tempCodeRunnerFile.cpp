// #include<iostream>
// #include<vector>
// #include<stack>
#include<bits/stdc++.h>
using namespace std;

class Stack{
    int arr[5];
    int top;
    public: 
        Stack(){
            top = -1;
        }
        void push(int value){
            if(top == 4){
                cout<<"Stack overflow \n";
                return;
            }
            top++;
            arr[top] = value;
        }
        void pop(){
            if(top == -1){
                cout<<"Stack underflow \n";
                return;
            }
            top--;
        }
        int peek(){
            if(top == -1){
                cout<<"Stack is empty \n";
                return -1;
            }
            return arr[top];
        }
        bool isEmpty(){
            return top == -1;
        }
        void display(){
            for(int i=top+1; i>=0; i--){
                cout<<arr[i]<<endl;
            }
        }
};

int main(){

    Stack s;
    cout<<s.peek()<<endl;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();
    cout<<endl;

    s.pop();
    s.display();

    cout<<"Top Element: "<<s.peek();

    return 0;
}