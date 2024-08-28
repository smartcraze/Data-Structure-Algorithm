#include <iostream>
using namespace std;

#define MAX_SIZE 100

void traverseInventory(int inventory[], int size) {
    cout << "Inventory List: ";
    for(int i = 0; i < size; i++) {
        cout << inventory[i] << " ";
    }
    cout << endl;
}

void insertItem(int inventory[], int &size, int item) {
    if (size < MAX_SIZE) {
        inventory[size] = item;
        size++;
    } else {
        cout << "Inventory is full, cannot add more items." << endl;
    }
}

void removeItem(int inventory[], int &size, int item) {
    int index = -1;
    for (int i = 0; i < size; i++) {
        if (inventory[i] == item) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        for (int i = index; i < size - 1; i++) {
            inventory[i] = inventory[i + 1];
        }
        size--;
    } else {
        cout << "Item not found in inventory." << endl;
    }
}

int main() {
    int inventory[MAX_SIZE];
    int size, n, m;
    int newItems[MAX_SIZE];
    int deleteItems[MAX_SIZE];

    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> inventory[i];
    }

    traverseInventory(inventory, size);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> newItems[i];
    }
    for (int i = 0; i < n; i++) {
        insertItem(inventory, size, newItems[i]);
    }

    traverseInventory(inventory, size);

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> deleteItems[i];
    }
    for (int i = 0; i < m; i++) {
        removeItem(inventory, size, deleteItems[i]);
    }

    traverseInventory(inventory, size);

    return 0;
}