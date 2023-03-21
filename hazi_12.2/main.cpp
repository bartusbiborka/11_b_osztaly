#include <iostream>

using namespace std;

int main()
{
    int n, k, a[100];
    cin >> n;
    cin >> k;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int oszto=1;
    for (int j=0; j<k; j++)
    {
        oszto *=10;
    }
    int s=0;
    for (int i=0; i<n; i++)
    {
        if ( a[i] / oszto > 0)
        {
            s++;

        }
    }
    cout << s;
    return 0;
}
