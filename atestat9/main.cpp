#include <iostream>
#include <fstream>
using namespace std;
bool egyenlo(int n)
{
    int szamjegy=n%10;
    n=n/10;
    int szj;
    while(n>0)
    {
        szj=n%10;
        n/=10;
        if(szj!=szamjegy)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ifstream in("tablou.txt");
    int i=0;
    int a[1000];
    while(in>> a[i])
    {
        i++;
    }
    for(int bi=0; bi< i-1; bi++)
    {
        for(int ji=bi+1; ji<i; ji++)
        {
            if( a[bi]> a[ji])
            {
                swap( a[bi], a[ji]);
            }
        }
    }
    int szamlalo=0;
    for(int j=0; j<i; j++)
    {
        if(egyenlo(a[j]))
        {
            cout << a[j] << " ";
            szamlalo++;
        }
    }
    if(szamlalo==0)
    {
        cout << "NU EXISTA";
    }
    in.close();
    return 0;
}
