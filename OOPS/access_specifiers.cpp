#include<iostream>
using namespace std;

class Employeer{

    public:    
        string name = "yogesh"; 
        int age = 25;

        void employee_details(){
            cout<<"protedted members"<<endl;
            cout<<Employee_id<<endl;
            cout<<username<<endl;

            cout<<"private members"<<endl;
            cout<<salary<<endl;
            cout<<bond<<endl;
        };

    protected:
        int Employee_id = 425;
        string username = "yogesh"; 

        void private_details2(){
            cout<<salary;
            cout<<bond;
        }


    private: 

        int salary = 50000;
        int bond = 3; 

        void private_details(){
            cout<<Employee_id;
            cout<<username;
        }

};


int main(){

    Employeer Emp1;

    // cout<<"input Emp1 data"<<endl;
    // cin>>Emp1.name;
    // cin>>Emp1.age;

    // cout<<"input Emp2 data"<<endl;
    // cin>>Emp2.name;
    // cin>>Emp2.age;

    cout<<"Emp1.name: "<<Emp1.name<<endl;
    cout<<"Emp1.age: "<<Emp1.age<<endl;
    Emp1.employee_details();
    // cout<<"Emp1.Employee_id: "<<Emp1.Employee_id<<endl;
    // cout<<"Emp1.username: "<<Emp1.username<<endl;
    // cout<<"Emp1.salary: "<<Emp1.salary<<endl;
    // cout<<"Emp1.bond: "<<Emp1.bond<<endl;


    return 0;
}