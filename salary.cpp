#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    // dynamically allocate memory for salaries
    int* salArray = new int[size];

    // Input salaries using pointer notation
    for (int i = 0; i < size; i++) {
        cout << "Enter Salary for employee " << (i + 1) << ": ";
        cin >> *(salArray + i);   // same as salArray[i]
    }

    // Apply increment formula
    for (int i = 0; i < size; i++) {
        *(salArray + i) = *(salArray + i) + (*(salArray + i) / (i + 1));
    }

    // Display updated salaries
    cout << "\nUpdated Salaries: ";
    for (int i = 0; i < size; i++) {
        cout << *(salArray + i) << " ";
    }
    cout << endl;

    // Free the dynamically allocated memory
    delete[] salArray;

    return 0;
}
