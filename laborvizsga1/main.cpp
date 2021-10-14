#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int v[100][100], i,j, n, P=1;
    in >> n;
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
            for (int oszto=2; oszto < v[i][j]/2+1; oszto ++)
            {
                if (v[i][j]%oszto==0)
                {
                    prim=false;
                }
            }
            if (prim && i<j)
            {
                P *= v[i][j];
            }
        }
    }
    cout << P << endl;
    in.close();
    return 0;
}
