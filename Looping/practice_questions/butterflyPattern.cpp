#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    // 13. Butterfly
    // cout << "\n13. Butterfly\n";
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //          cout << "* ";
    //     }
    //     for(int s=1;s<=2*(n-i);s++) {
    //         cout << "  ";
    //     }
    //     for(int j=1;j<=i;j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++) {
    //         cout << "* ";
    //     }
    //     for(int s=1;s<=2*(n-i);s++) {
    //         cout << "  ";
    //     }
    //     for(int j=1;j<=i;j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int s=1; s<=2*n-2*i; s++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    //to reverse the half structure reverse the row condition
    
    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int s=1; s<=2*n-2*i; s++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}