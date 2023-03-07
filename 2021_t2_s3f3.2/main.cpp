#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.in");
    int szam, s=0, firstpos=-1, lastpos=0;
    while (in >> szam)
    {
        s++;
        if(szam>0 && firstpos==-1)
        {
            firstpos=s;
        }
        if(szam>0)
        {
            lastpos=s;
        }
    }
    int a=s-firstpos+1;
    if(lastpos>a)
    {
        cout << lastpos;
    }
    else
    {
        cout << a;
    }
    in.close();
    return 0;
}
