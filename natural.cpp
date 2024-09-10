#include <iostream>
using namespace std;

int main()
{
    int n, a;
    cout << "Enter a natural number.";
    cin >> n;
    cout << "The number you entered is:" << n << endl;
    int sum = 0;
    for (a = 1; a <= n; a++)
    {
        sum = a + sum;
    }
    cout << "The sum of the n numbers is:" << sum;
    return 0;
}