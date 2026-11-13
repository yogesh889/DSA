#include<bits/stdc++.h>
using namespace std;

class CircularQueue{

    vector<int> arr;
    int front;
    int rear;
    int capacity;
    int count;

    public: 
        CircularQueue(int size){
            capacity = size;
            arr.resize(capacity);
            front = 0;
            rear = -1;
            count = 0;
        }
        bool isEmpty(){
            return count == 0;
        }
        bool isFull(){
            return count == capacity;
        }

        bool enqueue(int value){
            if(isFull()){
                cout<<"Queue overflow"<<endl;
                return false;
            }
            rear = (rear+1)%capacity;
            arr[rear] = value;
            count++;
            return true;
        }
        bool dequeue(){
            if(isEmpty()){
                cout<<"Queue Underflow"<<endl;
                return false;
            }
            front = (front+1)%capacity;
            count--;
            return true;
        }
        int getFront(){
            if(isEmpty()){
                return -1;
            }
            return arr[front];
        }
        int getRear(){
            if(isEmpty()){
                return -1;
            }
            return arr[rear];
        }
        int size(){
            return count;
        }
        
};

int main(){

    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    cout<<q.getFront()<<endl;

    q.dequeue();
    q.dequeue();

    q.enqueue(60);
    q.enqueue(70);

    cout<<q.getFront()<<endl;
    cout<<q.getRear()<<endl;

    return 0;
}