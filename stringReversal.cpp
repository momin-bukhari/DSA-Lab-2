#include <iostream>
using namespace std;

int main() {
    string var;
    cout << "Enter the string: ";
    cin >> var;
    
    // dynamically allocate a string object
    string* name = new string(var);

    // reverse in-place using string methods
    int n = name->length();
    for (int i = 0; i < n / 2; i++) {
        swap((*name)[i], (*name)[n - 1 - i]);
    }

    cout << "Reversed string: " << *name << endl;

    delete name; // free the string object
    return 0;
}
