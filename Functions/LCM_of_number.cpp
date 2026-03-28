#include <iostream>
using namespace std;

// int lcm_of_number(int m, int n) {

//     // start from the maximum of m and n
//     int num = (m > n) ? m : n;

//     // infinite loop until LCM is found
//     for (;; num++) {

//         // if num is divisible by both m and n → it is LCM
//         if (num % m == 0 && num % n == 0) {
//             return num;  // return LCM
//         }
//     }
// }

int main() {

    int a, b;  // input numbers
    cin >> a >> b;

    // int lcm = lcm_of_number(a, b);  // compute LCM

    // cout << lcm << endl;  // print result


    for(int i=1; ; i++){
        if(i%a == 0 && i%b==0){
            cout<<i<<endl;
            break;
        }
    }


    return 0;  // end of program
}