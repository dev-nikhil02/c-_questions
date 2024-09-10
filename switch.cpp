#include <iostream>
using namespace std;

int main()
{
    char grade = 'c';
    switch (grade)
    {
    case 'a':
        cout << "Excellent";
        break;
    case 'b':
        cout << "very good";
        break;
    case 'c':
        cout << "Good";
        break;
    case 'd':
        cout << "Passed";
        break;
    case 'f':
        cout << "Better luck next time";
        break;
    default:
        cout << "Enter a valid grade";
    }
    cout << endl
         << "Your grade is " << grade;
    return 0;
}