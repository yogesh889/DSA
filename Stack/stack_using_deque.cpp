#include <iostream>
#include <deque>
using namespace std;

class Stack
{
private:
    deque<int> dq;

public:
    // Insert an element into the stack
    void push(int x)
    {
        dq.push_back(x);
    }

    // Remove the top element
    void pop()
    {
        if (dq.empty())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        dq.pop_back();
    }

    // Return the top element
    int top()
    {
        if (dq.empty())
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return dq.back();
    }

    // Check whether the stack is empty
    bool empty()
    {
        return dq.empty();
    }

    // Return the number of elements
    int size()
    {
        return dq.size();
    }
};

int main()
{
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;

    st.pop();

    cout << "Top element after pop: " << st.top() << endl;
    cout << "Stack size: " << st.size() << endl;

    return 0;
}
