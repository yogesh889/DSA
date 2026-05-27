#include <iostream>
#include<cstring>
using namespace std;

class Student
{
private:
    char name[50];
    int grade;

public:
    void setName(char n[])
    {
        strcpy(name, n);
    }

    void setGrade(int g)
    {
        grade = g;
    }

    char* getName()
    {
        return name;
    }

    int getGrade()
    {
        return grade;
    }
};

int main()
{
    Student s1;

    s1.setName((char*)"John");
    s1.setGrade(90);

    cout << "Name: " << s1.getName() << ", Grade: " << s1.getGrade();

    return 0;
}