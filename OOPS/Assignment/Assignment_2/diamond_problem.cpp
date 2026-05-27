#include <iostream>
using namespace std;

class A
{
public:
    int data;
};

// Virtual inheritance removes duplicate base class copies.
class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
};

int main()
{
    D obj;

    obj.data = 100;

    cout << obj.data;

    return 0;
}