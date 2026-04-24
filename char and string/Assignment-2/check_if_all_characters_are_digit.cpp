#include<iostream>
using namespace std;

int main(){

    char str[] = "12ed345";

    int size = sizeof(str);

    bool flag = true;

    for(int i=0; str[i]!='\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            continue;
        }else{
            flag = false;
            break;
        }
    }

    if(flag == false){
        cout<<"all digits: No"<<endl;
    }else{
        cout<<"all digits: Yes"<<endl;
    }

    return 0;
}