#include <iostream>

using namespace std;

bool prim(int x)
{
    int oszto;
    bool prim = true;
    for(oszto=2; oszto<x/2+1; oszto++)
    {
        if (x%oszto==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    for (int i=5; i<n+1; i++)
    {
        if(prim(i)&&prim(i-2))
        {
            cout << "(" << i-2 << ", " << i << "), ";
        }
    }
    return 0;
}
