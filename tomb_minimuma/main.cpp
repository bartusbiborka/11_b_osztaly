#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

    int n;
    cout << "n=";
    cin >> n;
    int tomb[n];
    for(int i = 0; i<n; i++)
    {
        tomb[i] = rand()%10000;
    }
    int min = tomb[0];
    for (int i = 0; i<n; i++)
    {
        if (tomb[i] < min)
        {
            min = tomb[i];
        }
    }
    cout << min;
    return 0;
}
