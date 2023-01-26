#include <iostream>

using namespace std;

void schimb(int &n, int x, int p)
{
    int szorzo=1;
    for(int i=0; i<p; i++)
    {
        szorzo*=10;
    }
    int temp=n%szorzo;
    n/=szorzo*10;
    n= n*10+x;
    n=n*szorzo + temp;
}

int main()
{
    int n, x, p;
    cout << "n=";
    cin >> n;
    cout << "x=";
    cin >> x;
    cout << "p=";
    cin >> p;
    schimb (n,x,p);
    cout << n;
    return 0;
}

