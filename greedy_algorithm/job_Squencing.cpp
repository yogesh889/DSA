// 4. Job Sequencing Problem
// Problem

// Maximize total profit before deadlines.

// Example
// Job Deadline Profit

// A     2       100

// B     1       19

// C     2       27

// D     1       25

// E     3       15

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<char> job = {'A','B','C','D','E'};
    vector<int> deadline = {2,1,2,1,3};
    vector<int> profit = {100,19,27,25,15};

    vector<pair<int,int>> jobs;

    for(int i=0;i<profit.size();i++){

        jobs.push_back({profit[i], i});
    }

    sort(jobs.rbegin(), jobs.rend());

    int maxDeadline = *max_element(deadline.begin(), deadline.end());

    vector<char> slot(maxDeadline+1, '-');

    int totalProfit = 0;

    for(auto x : jobs){

        int index = x.second;

        for(int j=deadline[index]; j>=1; j--){

            if(slot[j]=='-'){

                slot[j]=job[index];

                totalProfit += profit[index];

                break;
            }
        }
    }

    cout<<"Selected Jobs : ";

    for(int i=1;i<=maxDeadline;i++){

        if(slot[i]!='-')

            cout<<slot[i]<<" ";
    }

    cout<<"\nTotal Profit = "<<totalProfit;

    return 0;
}