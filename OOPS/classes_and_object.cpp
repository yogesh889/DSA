#include<iostream>
using namespace std;

class student{
    public: 
        int id;
        int mobile;
        string name;

        int add(int x, int y){
            return x+y;
        }
};

int main(){

    student s1;

    cout<<"input s1.id: ";
    cin>>s1.id;
    cout<<"input s1.moble: ";
    cin>>s1.mobile;
    cout<<"input s1.name: ";
    cin>>s1.name;

    cout<<endl;

    cout<<"s1.age: "<<s1.id<<endl;
    cout<<"s1.mobile: "<<s1.mobile<<endl;
    cout<<"s1.name: "<<s1.name<<endl;

    cout<<endl;
    cout<<"s1.add(): ";
    int ans = s1.add(5, 7);
    cout<<ans;

    student s2;

    cout<<"input s2.id: ";
    cin>>s2.id;
    cout<<"input s2.moble: ";
    cin>>s2.mobile;
    cout<<"input s2.name: ";
    cin>>s2.name;

    cout<<endl;

    cout<<"s2.age: "<<s2.id<<endl;
    cout<<"s2.mobile: "<<s2.mobile<<endl;
    cout<<"s2.name: "<<s2.name<<endl;

    cout<<endl;
    cout<<"s2.add(): ";
    int ans2 = s2.add(7, 7);
    cout<<ans2;

    return 0;
}