#include <iostream>

using namespace std;

int main()
{
    int a[100][100], n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if (i<=j)
            {
                a[i][j] = a[i][j+1];
            }
        }
    }
    for (int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
