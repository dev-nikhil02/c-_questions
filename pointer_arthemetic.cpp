#include <iostream>
using namespace std;  // used to avoid usage of std:: on regular basis

int main() {
    int Max = 5;
    int ary[Max] = {23, 4, 53, 5, 2};  // declaring an array
    int* ptr = NULL;                   // declaring a null pointer ptr
    ptr = ary;                         // storing address of array to ptr
    // by incrementing
    for (int i = 0; i < Max; i++) {
        cout << "address of ary [" << i << "] is ";
        cout << ptr << endl;
        cout << "value of ary [" << i << "] is ";
        cout << *ptr << endl;
        ptr++;
    }
    ptr = &ary[Max - 1];
    // by decrementing
    for (int i = Max - 1; i >= 0; i--) {
        cout << "address of ary [" << i << "] is ";
        cout << ptr << endl;
        cout << "value of ary [" << i << "] is ";
        cout << *ptr << endl;
        ptr--;
    }
    return 0;
}