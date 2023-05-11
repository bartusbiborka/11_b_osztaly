#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("tablou.txt");
    int n, x;
    in >> n >> x;
    int a[100];
    for(int i=0; i<n; i++)
    {
        in>> a[i];
    }
    int szamlalo=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        {
            szamlalo++;
        }
    }
    if(szamlalo>1)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    in.close();
    return 0;
}
