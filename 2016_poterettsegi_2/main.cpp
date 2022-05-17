#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int n, m;

    in >> n;

    in >> m;
    int v[100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            in >> v[i][j];
        }
    }
    int x;
    cout << "x=";
    cin >> x;
    bool van=false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(v[0][j]==x || v[m-1][j]==x || v[i][0]==x || v[i][n-1]==x)
            {
                van = true;
            }

        }
    }
    if(van)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}
