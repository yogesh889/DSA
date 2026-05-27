#include<iostream>
#include<cstring>
using namespace std;

class Car
{
public:
    char brand[50];
    char model[50];
    int year;

    void display()
    {
        cout << brand << " " << model << " (" << year << ")" << endl;
    }
};

int main()
{
    Car c1;

    // Assign values
    strcpy(c1.brand, "Toyota");
    strcpy(c1.model, "Corolla");
    c1.year = 2020;

    // Display details
    c1.display();

    return 0;
}