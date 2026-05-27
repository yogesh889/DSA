#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
    char* name;
    int age;

public:
    // Constructor
    Person(const char* n, int a)
    {
        name = new char[strlen(n) + 1];
        strcpy(name, n);

        age = a;

        cout << "Constructor Called" << endl;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    // Destructor
    ~Person()
    {
        delete[] name;

        cout << "Destructor Called Memory Released" << endl;
    }
};

int main()
{
    Person p1("Yogesh", 22);

    p1.display();

    return 0;
}