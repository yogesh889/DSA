#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void displayArea()
    {
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void displayArea()
    {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void displayArea()
    {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};

class Triangle : public Shape
{
private:
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    void displayArea()
    {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(4, 6);
    Triangle t(8, 5);

    c.displayArea();
    r.displayArea();
    t.displayArea();

    return 0;
}