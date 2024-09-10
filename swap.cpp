#include <iostream>
using namespace std;

void max(int *a, int *b);

int main()
{
    int a, b, c;
    cout << "Enter first number:";
    cin >> a;
    cout << endl;
    cout << "Enter second number:";
    cin >> b;
    cout << endl;
    c = max(a, b);
    cout << "Max number is :" << c;
    return 0;
}

void max(int *a, int *b)
{
    int *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
}
