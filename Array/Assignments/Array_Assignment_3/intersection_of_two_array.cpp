// 2. Intersection of Two Arrays: Write a program to find and print the intersection of two arrays.

// Input: arr1 = [1, 2, 3, 4], arr2 = [3, 4, 5, 6]
// Output: 3 4

#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    int n1 = 4, n2 = 4;

    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; // avoid duplicates
            }
        }
    }
}



// optimal solution

// #include <iostream>
// using namespace std;

// int main() {
//     int arr1[] = {1, 2, 3, 4};
//     int arr2[] = {3, 4, 5, 6};

//     int n = 4, m = 4;

//     // sort both the algorithm using sorting algorithm.

//     int i = 0, j = 0;

//     // Step 2: Two-pointer traversal
//     while(i < n && j < m) {
//         if(arr1[i] == arr2[j]) {
//             cout << arr1[i] << " ";
//             i++;
//             j++;
//         }
//         else if(arr1[i] < arr2[j]) {
//             i++;
//         }
//         else {
//             j++;
//         }
//     }

//     return 0;
// }