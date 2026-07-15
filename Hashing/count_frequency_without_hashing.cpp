#include<iostream>
using namespace std;

int main() {

    int arr[9] = {1,3,3,4,1,4,4,4,4};

    int q;
    cin >> q;

    int i = 0;

    while(i < q) {

        int query;
        cin >> query;

        int frequency = 0;

        int j = 0;
        while(j < 9) {
            if(arr[j] == query) {
                frequency++;
            }
            j++;
        }

        cout << query << " : " << frequency << endl;

        i++;
    }

    return 0;
}