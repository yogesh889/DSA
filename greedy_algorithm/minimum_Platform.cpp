// 5. Minimum Platforms Required
// Problem

// Find minimum railway platforms needed so no train waits.

// Example
// Arrival

// 900
// 940
// 950
// 1100
// 1500
// 1800

// Departure

// 910
// 1200
// 1120
// 1130
// 1900
// 2000

nclude <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> arrival = {900,940,950,1100,1500,1800};

    vector<int> departure = {910,1200,1120,1130,1900,2000};

    sort(arrival.begin(), arrival.end());

    sort(departure.begin(), departure.end());

    int platform = 1;

    int answer = 1;

    int i = 1;
    int j = 0;

    while(i < arrival.size() && j < departure.size()){

        if(arrival[i] <= departure[j]){

            platform++;

            answer = max(answer, platform);

            i++;
        }

        else{

            platform--;

            j++;
        }
    }

    cout << "Minimum Platforms Required = " << answer;

    return 0;
}