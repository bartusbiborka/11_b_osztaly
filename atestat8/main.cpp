#include <iostream>
#include <fstream>
using namespace std;

bool pallindrom(int a)
{
    int ujszam=0;
    int temp=a;
    while (temp>0)
    {
        int szamjegy=temp % 10;
        temp=temp / 10;
        ujszam=ujszam*10+szamjegy;
    }
    if(a==ujszam)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ifstream in("numere.in");
    int max=0;
    int a;
    while(in >> a)
    {
        if(pallindrom(a) && a>max)
        {
            max=a;
        }
    }
    cout << max;
    in.close();
    return 0;
}
