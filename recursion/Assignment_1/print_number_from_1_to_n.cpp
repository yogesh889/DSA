#include<iostream>
using namespace std;

void print_number_from_1_to_n(int n){
    if(n == 0){
        return;
    }

    cout<<n<<" ";
    print_number_from_1_to_n(n-1);
    cout<<endl;

    cout<<n<<" ";

}

int main(){
    
    int n;
    cin>>n;

    print_number_from_1_to_n(n);

    return 0;
}