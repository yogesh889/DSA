#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
    char* title;

public:
    // Constructor
    Book(const char* t)
    {
        title = new char[strlen(t) + 1];

        strcpy(title, t);

        cout << "Book Created" << endl;
    }

    void display()
    {
        cout << "Book Title: " << title << endl;
    }

    // Destructor
    ~Book()
    {
        delete[] title;

        cout << "Memory Released for Title" << endl;
    }
};

int main()
{
    Book b1("C++ Programming");

    b1.display();

    return 0;
}