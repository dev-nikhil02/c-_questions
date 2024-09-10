#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of line (upper half)";
    cin >> n;
    // loop to print upper half
    for (i = 0; i <= n; i++)
    {
        // for spaces
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // for *
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // loop for lower half
    for (i = n - 1; i >= 1; i--)
    {
        // for spaces
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // for *
        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}