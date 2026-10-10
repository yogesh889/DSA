#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    // Constructor to initialize real and imaginary parts
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overloading the '+' operator using a member function
    Complex operator+(const Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    // Function to display the numbers
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 1.5);

    // An overloaded operator is used here; the compiler resolves
    // c1 + c2 to operator+() at compile time.
    Complex c3 = c1 + c2;

    cout << "Result: ";
    c3.display();

    return 0;
}
