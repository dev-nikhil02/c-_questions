#include <iostream>
using namespace std;

int main()
{
    int a, b = 0, n;
    cout << "Enter the number :" << endl;
    cin >> n;
    cout << "The number you entered is " << n << " and it is a ";
    for (a = 2; a < n; a++)
    {
        if (n % a == 0)
        {
            b++;
        }
    }
    if (b == 0)
    {
        cout << "pirme number";
    }
    else
    {
        cout << "composite number";
    }
    return 0;
}