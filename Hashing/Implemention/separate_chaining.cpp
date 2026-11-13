#include <bits/stdc++.h>
using namespace std;

class HashTable {

    int size;

    // Array of linked lists
    list<int>* table;

public:

    HashTable(int s) {
        size = s;
        table = new list<int>[size];
    }

    // Hash function
    int hashFunction(int key) {
        return key % size;
    }

    // Insert operation
    void insert(int key) {

        int index = hashFunction(key);

        table[index].push_back(key);

        cout << key << " inserted at index " << index << endl;
    }

    // Search operation
    bool search(int key) {

        int index = hashFunction(key);

        for (int x : table[index]) {

            if (x == key) {
                return true;
            }
        }

        return false;
    }

    // Display hash table
    void display() {

        for (int i = 0; i < size; i++) {

            cout << i << " -> ";

            for (int x : table[i]) {
                cout << x << " -> ";
            }

            cout << "NULL" << endl;
        }
    }

    ~HashTable() {
        delete[] table;
    }
};

int main() {

    HashTable ht(5);

    // Insert elements
    ht.insert(10);
    ht.insert(15);
    ht.insert(20);
    ht.insert(25);
    ht.insert(12);

    cout << "\nHash Table:\n";

    ht.display();

    // Search
    cout << "\nSearching 20: ";

    if (ht.search(20)) {
        cout << "Found";
    }
    else {
        cout << "Not Found";
    }

    return 0;
}