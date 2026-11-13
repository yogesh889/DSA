#include <bits/stdc++.h>
using namespace std;

class HashTable {

    int size;
    int* table;

public:

    HashTable(int s) {

        size = s;

        table = new int[size];

        for(int i = 0; i < size; i++) {
            table[i] = -1;
        }
    }

    // Hash Function
    int hashFunction(int key) {
        return key % size;
    }

    // Insert
    void insert(int key) {

        int index = hashFunction(key);

        for(int i = 0; i < size; i++) {

            int newIndex = (index + i * i) % size;

            if(table[newIndex] == -1) {

                table[newIndex] = key;

                cout << key << " inserted at index "
                     << newIndex << endl;

                return;
            }
        }

        cout << "Cannot insert " << key << endl;
    }

    // Search
    bool search(int key) {

        int index = hashFunction(key);

        for(int i = 0; i < size; i++) {

            int newIndex = (index + i * i) % size;

            if(table[newIndex] == -1) {
                return false;
            }

            if(table[newIndex] == key) {
                return true;
            }
        }

        return false;
    }

    // Display
    void display() {

        for(int i = 0; i < size; i++) {

            cout << i << " -> ";

            if(table[i] == -1)
                cout << "EMPTY";
            else
                cout << table[i];

            cout << endl;
        }
    }

    ~HashTable() {
        delete[] table;
    }
};

int main() {

    HashTable ht(7);

    ht.insert(10);
    ht.insert(17);
    ht.insert(24);
    ht.insert(31);

    cout << "\nHash Table:\n";

    ht.display();

    cout << "\nSearching 24: ";

    if(ht.search(24))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}