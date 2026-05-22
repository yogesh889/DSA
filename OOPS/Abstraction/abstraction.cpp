#include<iostream>
using namespace std;

class Shape{
    public:    
        virtual void draw() = 0;
};

class Circle: public Shape{
    public: 
        void draw() override{
            cout<<"drawing circle"<<endl;
        }
};

class Square: public Shape{
    public:
        void draw() override{
            cout<<"drawing square"<<endl;
        }
};

int main(){

    Shape* s1 = new Circle();
    Shape* s2 = new Square();

    Circle* c1 = new Circle();
    Square* c2 = new Square();

    s1->draw();
    s2->draw();
    c1->draw();
    c2->draw();

    // delete s1;
    // delete s2;

    return 0;
}