#include <iostream>

using namespace std;
int a, b;
int lnko(int a, int b)
{
    while (a!=b)
    {
        if (a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    return a;
}
int lkkt(int a, int b)
{
    return a*b/lnko(a, b);
}
int main()
{
    a=4;
    b=6;
    cout << lnko(a,b) << endl;
    cout << lkkt(a,b) << endl;
    return 0;
}

