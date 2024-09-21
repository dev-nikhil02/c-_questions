#include <ctime>
#include <iostream>
using namespace std;

int main() {
    // current date/time based on current system
    time_t now = time(0);
    cout << "Number of sec since January 1,1970:" << now << endl;
    /*In the below line of code. tm is a c structure(user defined datatype)
    which holds multiple values of deifiernt data types. We are declaring a
    pointer ltm which points towards the address of now(variable contain current
    time). With local time function time is modified to the local time of the
    system and stored as a c structure which is accessed by *ltm*/
    tm *ltm = localtime(&now);
    // print various components of tm structure.
    cout << "Year: " << 1900 + ltm->tm_year << endl;
    cout << "Month: " << 1 + ltm->tm_mon << endl;
    cout << "Day: " << ltm->tm_mday << endl;
    cout << "Time: " << 1 + ltm->tm_hour << ":";
    cout << 1 + ltm->tm_min << ":";
    cout << 1 + ltm->tm_sec << endl;
}
