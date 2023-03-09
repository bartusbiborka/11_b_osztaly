#include <iostream>

using namespace std;

bool prim(int szam)
{
    bool prim = true;
    for(int oszto=2; oszto<szam/2+1; oszto++)
    {
        if (szam%oszto==0)
        {
            return false;
        }
    }
    return true;
}
int suma(int n)
{
    int s=1;
    for(int i=1; i<n+1; i++)
    {
        if(n%i == 0 && !prim(i))
        {
            s+=i;
        }
    }
    return s;
}
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    cout << suma(n);
    return 0;
}
