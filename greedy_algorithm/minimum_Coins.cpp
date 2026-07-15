// 1. Minimum Coins (Indian Currency)
// Problem

// Given an amount, find the minimum number of coins/notes required.

// Example
// Amount = 68

// Output:
// 50 10 5 2 1

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> coins = {500,200,100,50,20,10,5,2,1};

    int amount = 68;
    int count = 0;

    cout << "Coins Used: ";

    for(int coin : coins){

        while(amount >= coin){

            cout << coin << " ";

            amount -= coin;

            count++;
        }
    }

    cout<<"Number of coins: "<<count;

    return 0;
}