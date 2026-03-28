#include<iostream>
using namespace std;

void A_pattern(){
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || j==1 || j==n || i==3){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void astrisk_pattern(){
    int n;
    cin>>n;
    
    int h_mid = (n/2)+1;
    int v_mid = (n/2)+1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==n-i+1 || i==h_mid || j==i || j==v_mid){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main(){

    A_pattern();
    astrisk_pattern();

    return 0;
}