#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int v[100][100], i,j,n, oszto, S=0;
    in >>n;
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            in >> v[i][j];
        }
    }
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            bool prim=true;
            for (oszto=2; oszto<v[i][j]; oszto++)
            {
                if (v[i][j]%oszto==0)
                {
                    prim=false;
                }
            }
            if (prim)
            {
                S+=v[i][j];
            }
        }
    }
    cout << S;
    in.close();
    return 0;
}
