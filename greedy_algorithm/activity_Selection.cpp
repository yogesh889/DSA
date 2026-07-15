// 2. Activity Selection Problem
// Problem

// Select the maximum number of activities that don't overlap.

// Input
// Start = {1,3,0,5,8,5}

// End   = {2,4,6,7,9,9}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<pair<int,int>> activities = {
        {2,1},
        {4,3},
        {6,0},
        {7,5},
        {9,8},
        {9,5}
    };

    // pair = {finish, start}

    sort(activities.begin(), activities.end());

    int lastFinish = -1;

    cout << "Selected Activities:\n";

    for(auto activity : activities){

        int finish = activity.first;
        int start = activity.second;

        if(start >= lastFinish){

            cout << "(" << start << "," << finish << ")" << endl;

            lastFinish = finish;
        }
    }

    return 0;
}