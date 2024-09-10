#include <iostream>
using namespace std;

int main()
{
    cout << "Perfect numbers between 1 to 500 are ";
    int a = 1, n = 1, sum = 0;
    while (n <= 500)
    {
        a = 1;
        sum = 0;
        while (a <= n / 2)
        {
            if (n % a == 0)
            {
                sum += a;
            }
            a++;
        }
        if (sum == n)
        {
            cout << n << " ";
        }
        n++;
    }
    return 0;
}