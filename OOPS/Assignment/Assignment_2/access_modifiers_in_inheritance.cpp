#include <iostream>
using namespace std;

class Base
{
public:
    int publicVar;

protected:
    int protectedVar;

private:
    int privateVar;
};

class Derived : public Base
{
public:
    void show()
    {
        publicVar = 10;
        protectedVar = 20;

        cout << publicVar << endl;
        cout << protectedVar << endl;

        // privateVar not accessible
    }
};

int main()
{
    Derived d;

    d.publicVar = 50;

    cout << d.publicVar;

    return 0;
}


// | Modifier  | Same Class | Derived Class | Outside |
// | --------- | ---------- | ------------- | ------- |
// | public    | ✅          | ✅             | ✅       |
// | protected | ✅          | ✅             | ❌       |
// | private   | ✅          | ❌             | ❌       |
