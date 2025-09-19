#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory Address pointed by the pointer variable: " << ptr << endl;
    cout << "Dereferenced value: " << *ptr << endl;
}

int main() {
    int iValue = 5;
    analyze_pointer(&iValue);

    cout << "_________________" << endl;

    int *heapInt = new int(10);
    analyze_pointer(heapInt);

    delete heapInt;
    return 0;
}