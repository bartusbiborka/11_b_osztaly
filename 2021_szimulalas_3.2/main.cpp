#include <iostream>

using namespace std;

int main()
{
    int a[100][100], n, k;
    cout << "n=";
    cin >> n;
    for(int i=0; i< n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "k=";
    cin >> k;
    int x=a[k-1][k-2];
    for(int j=k-1; j>=0; j--)
    {
        a[k-1][j-1]= a[k-1][j-2];
    }
    a[k-1][0]=x;
    for(int i=0; i< n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
