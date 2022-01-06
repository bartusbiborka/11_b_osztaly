#include <iostream>

using namespace std;
int lnko(int a, int b)
{
    if (a==b)
    {
        return a;
    }
    if(a>b)
    {
        return lnko(a-b, b);
    }
    return lnko(a, b-a);
}
int main()
{

    cout << lnko(9,15) << endl;
    cout << lnko(3,6) << endl;
    cout << lnko(3,7) << endl;
    cout << lnko(7,28) << endl;
    return 0;
}
