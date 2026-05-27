#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void create() = 0;
};

class CircleFactory : public Shape
{
private:
    int radius;

public:
    CircleFactory(int r)
    {
        radius = r;
    }

    void create()
    {
        cout << "Circle created with radius: "
             << radius << endl;
    }
};

class RectangleFactory : public Shape
{
private:
    int length, width;

public:
    RectangleFactory(int l, int w)
    {
        length = l;
        width = w;
    }

    void create()
    {
        cout << "Rectangle created with length: "
             << length
             << ", width: "
             << width
             << endl;
    }
};

int main()
{
    Shape* s1 = new CircleFactory(3);

    Shape* s2 = new RectangleFactory(4, 5);

    s1->create();
    s2->create();

    return 0;
}