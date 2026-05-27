#include <iostream>
#include <cstring>
using namespace std;

class Person
{
protected:
    char name[50];
    int age;

public:
    Person(const char n[], int a)
    {
        strcpy(name, n);
        age = a;
    }
};

class Employee : public Person
{
protected:
    int employeeID;

public:
    Employee(const char n[], int a, int id)
        : Person(n, a)
    {
        employeeID = id;
    }
};

class Manager : public Employee
{
private:
    char department[50];

public:
    Manager(const char n[], int a, int id, const char d[])
        : Employee(n, a, id)
    {
        strcpy(department, d);
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Manager m("Yogesh", 22, 101, "IT");

    m.display();

    return 0;
}