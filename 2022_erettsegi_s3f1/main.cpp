#include <iostream>

using namespace std;

void secventa (int &n)
{
    int t=n, szj;
    int h=1;
    int ujszam=0;
    while (t>0)
    {
        szj=t%10;
        t=t/10;

        if (szj==2 && t%10==2)
        {
            szj=0;
        }
        ujszam=ujszam+h*szj;
        h=h*10;
    }
    n=ujszam;
}
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    secventa(n);
    cout << n;
    return 0;
}
