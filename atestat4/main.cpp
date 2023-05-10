#include <iostream>

using namespace std;
bool prim(int n)
{
    for(int oszto=2; oszto<n/2+1; oszto++)
    {
        if(n%oszto==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int x, y, k;
    cin >> x;
    cin >> y;
    cin>>k;
    int szamlalo=0;
    for(int i=x; i<y+1; i++)
    {
        if(prim(i))
        {
            szamlalo++;
            if(szamlalo<k+1)
            {
                cout<< i << " ";
            }
        }

    }
    cout <<endl;
    if(szamlalo<k)
    {
        cout << "s-au gasit mai putine numere prime: " << szamlalo;
    }
    return 0;
}
