// * * * * * 
// *
// *
// *   * * *
// *       *
// * * * * *  




#include<iostream>
using namespace std;

void G_pattern(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || j==1 || i==n || (j==n && i>=3) || (i==3 && j>=3)){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

}

int main(){

    G_pattern();

    return 0;
}