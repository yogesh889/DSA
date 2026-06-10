#include<iostream>
using namespace std;

class Stack{ 
    int arr[5];
    int top;

    public:
        Stack(){
            top = -1;
        }
        void push(int val){
            if(top == 4){
                cout<<"Stack is overflow";
            }
            top++;
            arr[top] = val;
            cout<<top<<" ";
        }

        void pop(){
            top--;
        }

        void peek(){
            cout<<arr[top]<<" ";
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }
        }

        void display(){
            for(int i=top; i>=0; i--){
                cout<<arr[i]<<" ";
            }
        }

};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout<<endl;

    s.pop();
    s.display();

    cout<<endl;
    s.peek();

    cout<<s.isEmpty()<<" ";

    return 0;
}