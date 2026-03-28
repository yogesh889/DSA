#include<iostream>
using namespace std;

void pascal_triangle(){

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int value = 1;
        for(int j=0; j<=i; j++){
            cout<<value;
            value = value*(i-j)/(j+1);
        }
        cout<<endl;
    }


}


int main(){

    pascal_triangle();

    return 0;
}