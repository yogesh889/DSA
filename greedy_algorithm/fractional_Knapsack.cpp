// 3. Fractional Knapsack
// Problem

// Take complete or fractional part of an item to maximize value.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> value = {60,100,120};
    vector<int> weight = {10,20,30};

    vector<pair<double,int>> ratio;

    for(int i=0;i<value.size();i++){

        ratio.push_back({(double)value[i]/weight[i], i});
    }

    sort(ratio.rbegin(), ratio.rend());

    int capacity = 50;

    double totalValue = 0;

    for(auto x : ratio){

        int index = x.second;

        if(capacity >= weight[index]){

            totalValue += value[index];

            capacity -= weight[index];
        }

        else{

            totalValue += ((double)value[index]/weight[index]) * capacity;

            break;
        }
    }

    cout << "Maximum Value = " << totalValue;

    return 0;
}