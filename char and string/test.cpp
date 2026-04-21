#include<iostream>
using namespace std;

int main(){

    char ch[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};

    int n = sizeof(ch);

    cout<<n<<endl;

    int cnt = 0;

    for(int i=0; ch[i]!='\0' ; i++){
        cnt++;
    }

    cout<<cnt<<endl;
    
    return 0;
}