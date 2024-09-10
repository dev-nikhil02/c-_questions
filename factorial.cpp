#include <iostream>
using namespace std;

int main()
{
    int a, b = 1, n;
    cout << "Enter the number:";
    cin >> n;
    cout << "The factorial of the number you entered is :";
    for (a = n; a >= 1; a--)
    {
        b *= a;
    }
    cout << b;
    return 0;
}