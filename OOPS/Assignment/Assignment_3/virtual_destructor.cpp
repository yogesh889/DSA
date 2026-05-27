#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class constructor" << endl;
    }

    virtual ~Base()
    {
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived class constructor" << endl;
    }

    ~Derived()
    {
        cout << "Derived class destructor" << endl;
    }
};

int main()
{
    Base* obj = new Derived();

    delete obj;

    return 0;
}


// Why Virtual Destructor?

// Without virtual:

// Only Base destructor runs ❌

// With virtual:

// Derived destructor runs first ✅
// Then Base destructor ✅

// This prevents:

// Memory Leak