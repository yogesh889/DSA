#include <iostream>
#include <cstring>
using namespace std;

class Add
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    float add(float a, float b)
    {
        return a + b;
    }

    void add(const char a[], const char b[])
    {
        char result[100];

        strcpy(result, a);
        strcat(result, b);

        cout << "Concatenated string: " << result << endl;
    }
};

int main()
{
    Add obj;

    cout << "Sum of integers: "
         << obj.add(10, 20) << endl;

    cout << "Sum of floats: "
         << obj.add(3.5f, 2.5f) << endl;

    obj.add("Hello ", "World!");

    return 0;
}