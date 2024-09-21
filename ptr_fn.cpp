#include <ctime>
#include <iostream>
using namespace std;
void getSeconds(unsigned long *par);
int main() {
    unsigned long sec;
    getSeconds(&sec);  // Here we are receiving the pointer from the function
    // print the actual value
    cout << "Number of seconds :" << sec << endl;
    return 0;
}
void getSeconds(unsigned long *par) {
    // get the current number of seconds
    *par = time(
        NULL);  // this is returning the pointer to where the function is called
    return;
}