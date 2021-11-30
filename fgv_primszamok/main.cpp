#include <iostream>

using namespace std;

int primszam(int a)
{
    int x;
    for (int i=3; i<a; i++)
    {
        bool prim=true;
        for (int oszto=2; oszto<i/2+1; oszto++)
        {
            if (i%oszto==0)
            {
                prim=false;
            }
        }
        if (prim)
        {
            x=i;
        }
    }
    return x;
}

int main()
{
    int a;
    cout << "a szam=";
    cin >> a;
    cout << primszam(a);
    return 0;
}
