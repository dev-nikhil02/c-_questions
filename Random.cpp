#include <iostream>
using namespace std;
#include <iomanip>
using std::setw;
#include <stdlib.h>
#include <ctime>

int main()
{
    srand((unsigned)time(NULL));
    int random[5];
    for (int i = 0; i < 5; i++)
    {
        random[i] = rand();
    }
    cout << "The random numbers stored" << endl;
    cout << setw(10) << "element" << setw(13) << "value" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << setw(10) << "random[" << i << "]" << setw(13) << random[i] << endl;
    }
    return 0;
}