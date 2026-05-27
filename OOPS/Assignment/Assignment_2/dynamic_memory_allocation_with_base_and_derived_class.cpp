#include <iostream>
using namespace std;

class Shape
{
public:
    Shape()
    {
        cout << "Shape Constructor" << endl;
    }

    virtual void area()
    {
        cout << "Area Function" << endl;
    }

    virtual ~Shape()
    {
        cout << "Shape Destructor" << endl;
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
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }

    ~Circle()
    {
        cout << "Circle Destructor" << endl;
    }
};

int main()
{
    Shape* s = new Circle(5);

    s->area();

    delete s;

    return 0;
}


// | Inheritance Type    | Meaning                    |
// | ------------------- | -------------------------- |
// | Single              | One parent → One child     |
// | Multilevel          | Grandparent chain          |
// | Hierarchical        | One parent → Many children |
// | Multiple            | Many parents → One child   |
// | Hybrid              | Combination                |
// | Virtual Inheritance | Removes ambiguity          |
// | Diamond Problem     | Duplicate base issue       |
