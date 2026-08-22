#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

int main() {
    // 1. Create the raw input (the list of reserved tickets)
    vector<vector<int>> reservedSeats = {
        {1, 2}, 
        {1, 5}, 
        {2, 8}
    };

    // 2. Create the empty map
    unordered_map<int, set<int>> reserved;

    // 3. YOUR EXACT CODE: Process the seats
    for (auto& seat : reservedSeats) {
        int row = seat[0];
        int col = seat[1];
        reserved[row].insert(col);
    }

    // 4. Print the contents of the map to prove it worked!
    cout << "--- Final Organized Map ---" << endl;
    
    for (auto& [row, seats] : reserved) {
        cout << "Row " << row << " -> Reserved Seats: { ";
        
        // Loop through the set of seats for this specific row
        for (int col : seats) {
            cout << col << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}