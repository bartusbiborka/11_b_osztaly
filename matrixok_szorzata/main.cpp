#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int a[100][100], b[100][100], c[100][100], d[100][100];
    int i,j, n,m;
    in >> n;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            in >> a[i][j];
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            in >> b[i][j];
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            c[i][j]= a[i][j]+b[i][j];
        }
    }
    cout << "a ket matrix osszege: " << endl;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    cout << "a ket matrix szorzata: " << endl;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            for (int k=0; k<n; k++)
            {
                d[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }


    in.close();
    return 0;
}
