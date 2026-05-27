#include <iostream>
#include <cstring>
using namespace std;

class Person
{
protected:
    char name[50];
    int age;
};

class Employee
{
protected:
    int employeeID;
    float salary;
};

class Manager : public Person, public Employee
{
private:
    char department[50];

public:
    void setData()
    {
        strcpy(name, "Yogesh");
        age = 22;

        employeeID = 101;
        salary = 50000;

        strcpy(department, "IT");
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
    }
};

int main()
{
    Manager m;

    m.setData();

    m.display();

    return 0;
}