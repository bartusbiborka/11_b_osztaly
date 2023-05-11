#include <iostream>

using namespace std;

int main()
{
    int n, a[100];
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int maxparatlan=0, maxparos=0, nr1=1, nr2=1;
    for(int i=1; i<n; i++)
    {
        if(a[i-1]%2!=0 && a[i]%2!=0)
        {
            nr1++;
        }
        if(nr1>maxparatlan)
        {
            maxparatlan=nr1;
        }
    }
    for(int i=1; i<n; i++)
    {
        if(a[i-1]%2==0 && a[i]%2==0)
        {
            nr2++;
        }
        if(nr2>maxparos)
        {
            maxparos=nr2;
        }
    }
    if(maxparos>maxparatlan)
    {
        cout << maxparos;
    }
    else
    {
        cout << maxparatlan;
    }
    return 0;
}
