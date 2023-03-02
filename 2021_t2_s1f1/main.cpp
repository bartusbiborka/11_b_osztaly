#include <iostream>

using namespace std;

int factori(int n, int m)
{
    int nr=0;
    for(int i=2; i<=n; i++)
    {
        int nr1=0, nr2=0;
        while(n%i==0)
        {
            n/=i;
            nr1++;
        }
        while(m%i==0)
        {
            m/=i;
            nr2++;
        }
        if(nr1==nr2 && nr1>0)
        {
            nr++;
        }
    }
    return nr;
}
int main()
{
    cout << factori(16500, 10780);
    return 0;
}
