#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            a[n-1][j]=1;
            a[i][m-1]=1;
        }
    }
    for(int i=n-2; i>=0; i--)
    {
        for(int j=m-2; j>=0; j--)
        {
            a[i][j]=(a[i][j+1]+a[i+1][j])%10;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
