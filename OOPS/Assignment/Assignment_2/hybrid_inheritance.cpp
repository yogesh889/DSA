#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo, marks;
};

class ArtsStudent : virtual public Student
{
};

class ScienceStudent : virtual public Student
{
};

class ScholarshipStudent : public ArtsStudent, public ScienceStudent
{
public:
    void setData(int r, int m)
    {
        rollNo = r;
        marks = m;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    ScholarshipStudent s;

    s.setData(101, 95);

    s.display();

    return 0;
}


// Why Virtual Inheritance?

// Without virtual:

// Two copies of Student are created ❌
// Ambiguity happens ⚠️

// Virtual inheritance creates:

// Only ONE shared Student object.