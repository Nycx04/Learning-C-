#include <iostream>
int search(float* arr, int size, float key) {
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return i;
    return -1; // added so it returns -1 if not found
}

int main() {
    using namespace std;
    int n;
    cout << "Enter number of grades: ";
    cin >> n;

    float* grades = new float[n]; 
    // declare dynamic array

    for (int i = 0; i < n; i++) {
        cout << "Enter grade " << i + 1 << ": ";
        cin >> grades[i];
    }

    cout << "\nList of grades: ";
    for (int i = 0; i < n; i++) {
        cout << grades[i] << " ";
    }

    float key; 
    cout << "\n\nEnter a grade to search: ";
    cin >> key;

    int location = search(grades, n, key);
    if (location == -1) {
        cout << key << " was not found in the list\n";
    } else {
        cout << key << " found at index " << location << " in the list\n";
    }

    delete[] grades; // free memory
    return 0;
}
