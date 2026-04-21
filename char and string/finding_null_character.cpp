#include<iostream>
#include<string>

using namespace std;

int main(){

    // string do not have null character at the end
    // only character array have null character at the end

    char ch[] = "hello";
    int n = sizeof(ch);

    cout<<n<<endl;

    for(int i=0; i<n; i++){
        if(ch[i] == '\0'){
            cout<<endl;
            cout<<"null character found";
        }
        cout<<ch[i];
    }

    return 0;
}