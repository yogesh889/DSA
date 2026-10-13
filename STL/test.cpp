#include<bits/stdc++.h>

using namespace std;

class Add{
    public: 
        int operator()(int a, int b){
            return a+b;
        }
};

int main(){

    Add obj;
    cout<<obj(10, 20);

    return 0;
}