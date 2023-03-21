#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100];
    cin >> n;
    for(int i=1; i<n+1; i++)
    {
        for(int j=1; j<n+1; j++)
        {
            a[i][j]= (i*j)%10;
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
