#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int m, n;
    int s=0;
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i=1; i<=m; i++)
    {
        a[i][0]=11;
        a[i][n+1]=11;

    }
    for (int j=1; j<=n; j++)
    {
        a[0][j]=11;
        a[m+1][j]=11;
    }
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
        {
            int min=a[i-1][j];
            if (a[i+1][j]<min)
            {
                min=a[i+1][j];
            }
            if (a[i][j-1]<min)
            {
                min=a[i][j-1];
            }
            if (a[i][j+1]<min)
            {
                min=a[i][j+1];
            }
            if(a[i][j]<min)
            {
                s=s+(min-a[i][j]);
            }

        }
    }
    cout << s;
    return 0;
}
