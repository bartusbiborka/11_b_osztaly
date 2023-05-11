#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int a[100][100];
    cin >> n;
    cin >>m;
    int k=1;
    for(int i=n-1; i>=0; i--)
    {
        for(int j=m-1; j>=0; j--)
        {
            while((k*k)%2==0)
            {
                k++;
            }
            a[i][j]=k*k;
            k++;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout<< endl;
    }
    return 0;
}
