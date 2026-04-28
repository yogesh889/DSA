#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int rem = 0;
    int rev = 0;

    while(n != 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    cout << rev << endl;

    return 0;
}





// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int binary = 0, place = 1;

//     while(n > 0){
//         int rem = n % 2;
//         binary = binary + rem * place;
//         place *= 10;
//         n /= 2;
//     }

//     cout << binary;
//     return 0;
// }