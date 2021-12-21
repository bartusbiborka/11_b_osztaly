#include <iostream>

using namespace std;
int paratlan(int n);
int paros(int n)
{
    if (n==0)
    {
        return 0;
    }
    return n+paratlan(n-1);
}
int paratlan (int n)
{
    if (n==1)
    {
        return 1;
    }
    return n+paros(n-1);
}
int main()
{
    int a;
    cout << "a= ";
    cin >> a;
    if (a%2==1)
    {
        cout << paratlan(a);
    }
    else
    {
        cout << paros(a);
    }
    return 0;
}
