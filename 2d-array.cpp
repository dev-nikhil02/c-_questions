#include <iostream>
using namespace std;

int main()
{
    int k = 0;
    int array2d[5][4];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array2d[i][j] = k;
            k++;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "array2d[" << i << "][" << j << "]: ";
            cout << array2d[i][j] << endl;
        }
    }
    return 0;
}