#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100][100];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i+j-2==n-1)
            {
                a[i][j]=n;
            }
            if(i+j-2<n-1)
            {
                a[i][j]=i+j-1;
            }
            if(i+j-2>n-1)
            {
                a[i][j]= 2*n-i-j+1;
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
