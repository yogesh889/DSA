#include<iostream>
using namespace std;

int main() {
    char str[] = "abc123!@#456";
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 48 && str[i] <= 57) {  // if(str[i] >= '0' && str[i] <= '9')   ==>
                                            // it is similar to if(str[i] >= 'A' && str[i] <= 'Z')
            str[j++] = str[i];  // keep digit
        }
    }
    str[j] = '\0';

    cout<<str<<endl;

    return 0;
}