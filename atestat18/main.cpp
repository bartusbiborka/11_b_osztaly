#include <iostream>
#include <fstream>
using namespace std;
bool ugyanaz(int n)
{

    int szamjegy=n%10;
    while(n>9)
    {
        n/=10;
    }
    if(n==szamjegy)
    {
        return true;
    }
    return false;
}
int main()
{
    ifstream in("numere.in");
    int n;
    int a[100];
    in >> n;
    for(int i=0; i<n; i++)
    {
        in >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(ugyanaz(a[i]))
        {
            cout << a[i] << " ";
        }
    }
    in.close();
    return 0;
}
