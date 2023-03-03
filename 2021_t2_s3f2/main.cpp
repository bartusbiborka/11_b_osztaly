#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int n;
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i+j)==n-1)
            {
                a[i][j]=n;
            }
        }
    }
    for(int i=n-1; i>=0; i--)
    {
        for(int j=n-1; j>=0; j--)
        {
            if((i+j)<n-1)
            {
                a[i][j]=a[i+1][j]-1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if((i+j)>n-1)
            {
                a[i][j]=a[i-1][j]-1;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
