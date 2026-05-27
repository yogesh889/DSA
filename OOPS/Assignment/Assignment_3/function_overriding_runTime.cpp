#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
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

    void area()
    {
        cout << "Circle area: "
             << 3.14 * radius * radius
             << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void area()
    {
        cout << "Rectangle area: "
             << length * width
             << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(4, 6);

    c.area();
    r.area();

    return 0;
}


// | Overloading          | Overriding     |
// | -------------------- | -------------- |
// | Same class           | Parent + Child |
// | Compile time         | Runtime        |
// | Different parameters | Same function  |
