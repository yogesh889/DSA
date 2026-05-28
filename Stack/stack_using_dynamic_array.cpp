#include<iostream>
using namespace std;

class DynamicStack {

    int* arr;
    int top;
    int capacity;

public:

    DynamicStack() {

        capacity = 2;
        arr = new int[capacity];
        top = -1;
    }

    void push(int value) {

        if(top == capacity - 1) {

            int* newArr =
                new int[capacity * 2];

            for(int i=0; i<capacity; i++) {
                newArr[i] = arr[i];
            }

            delete[] arr;

            arr = newArr;

            capacity *= 2;
        }

        top++;
        arr[top] = value;
    }

    void pop() {

        if(top == -1) {
            cout << "Underflow\n";
            return;
        }

        top--;
    }

    int peek() {

        if(top == -1) {
            return -1;
        }

        return arr[top];
    }

    void display() {

        for(int i=top; i>=0; i--) {
            cout << arr[i] << endl;
        }
    }

    ~DynamicStack() {
        delete[] arr;
    }
};

int main() {

    DynamicStack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();
}