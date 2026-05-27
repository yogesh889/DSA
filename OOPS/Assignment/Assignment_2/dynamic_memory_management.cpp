#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
protected:
    char* name;

public:
    Employee(const char* n)
    {
        name = new char[strlen(n) + 1];

        strcpy(name, n);
    }

    virtual ~Employee()
    {
        delete[] name;

        cout << "Employee Destructor" << endl;
    }
};

class Manager : public Employee
{
public:
    Manager(const char* n)
        : Employee(n)
    {
    }

    void display()
    {
        cout << "Manager Name: " << name << endl;
    }

    ~Manager()
    {
        cout << "Manager Destructor" << endl;
    }
};

int main()
{
    Manager m("Yogesh");

    m.display();

    return 0;
}