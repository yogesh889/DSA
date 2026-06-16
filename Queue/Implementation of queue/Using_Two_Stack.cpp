#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1, s2;

public:

    void enqueue(int x) {
        s1.push(x);
    }

    void dequeue() {

        if (s1.empty() && s2.empty()) {
            cout << "Queue Empty\n";
            return;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        cout << "Deleted: " << s2.top() << endl;
        s2.pop();
    }

    void display() {

        stack<int> temp1 = s1;
        stack<int> temp2 = s2;

        while (!temp2.empty()) {
            cout << temp2.top() << " ";
            temp2.pop();
        }

        int arr[100];
        int i = 0;

        while (!temp1.empty()) {
            arr[i++] = temp1.top();
            temp1.pop();
        }

        for (int j = i - 1; j >= 0; j--)
            cout << arr[j] << " ";

        cout << endl;
    }
};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    return 0;
}