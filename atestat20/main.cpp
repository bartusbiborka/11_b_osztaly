#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100];
    cout << "n=";
    cin>> n;
    int k=1;
    int i=1, j=1;
    while (i<=n)
    {
        if (k%2==0 && k%3!=0)
        {
            a[i][j]=k;
            k++;
            j++;
            if (j==n+1)
            {
                j=1;
                i++;
            }
        }
        else
        {
            k++;
        }
    }
    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<n+1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
