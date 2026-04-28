#include<iostream>
using namespace std;

int lcm(int a, int b, int multiple){

    // If divisible by both → found LCM
    if(multiple % a == 0 && multiple % b == 0){
        return multiple;
    }

    // Otherwise, try next number
    return lcm(a, b, multiple + 1);
}

int main(){

    int a = 4, b = 6;

    int start = max(a, b);

    cout << lcm(a, b, start);

    return 0;
}