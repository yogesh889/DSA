#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructor" << endl;
    }

    ~Base()
    {
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived Constructor" << endl;
    }

    ~Derived()
    {
        cout << "Derived Destructor" << endl;
    }
};

int main()
{
    Derived d;

    return 0;
}


// 🧠 Important Rule
// 🔥 Constructor Order

// Parent → Child

// 🔥 Destructor Order

// Child → Parent

// Why?

// Because:

// Foundation built first 🏗️
// Destroyed last 💥