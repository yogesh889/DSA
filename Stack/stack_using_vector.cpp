#include<iostream>
#include<vector>
using namespace std;

class Stack {

    vector<int> v;

public:

    void push(int value) {
        v.push_back(value);
    }

    void pop() {

        if(v.empty()) {
            cout << "Stack Underflow\n";
            return;
        }

        v.pop_back();
    }

    int top() {

        if(v.empty()) {
            return -1;
        }

        return v.back();
    }

    bool isEmpty() {
        return v.empty();
    }

    int size() {
        return v.size();
    }

    void display() {

        for(int i=v.size()-1; i>=0; i--) {
            cout << v[i] << endl;
        }
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top Element: "
         << s.top();
}