#include <iostream>

using namespace std;

bool prim(int a)
{
    for (int oszto=2; oszto<a/2+1; oszto++)
    {
        if (a%oszto==0)
        {
            return false;
        }
    }
    return true;
}
bool pallindrom(int a)
{
    int ideiglenes, szamjegy, ujszam;
    ujszam=0;
    ideiglenes=a;
    while (ideiglenes>0)
    {
        szamjegy=ideiglenes % 10;
        ideiglenes=ideiglenes / 10;
        ujszam=ujszam*10+szamjegy;
    }

    if (ujszam==a)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int lnko(int a, int b)
{
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    return a;
}
int main()
{
    int n, a, b;
    cout << "Mit szeretnél csinálni?" << endl<< "1. Megvizsgálni, hogy egy szám prím-e" << endl;
    cout << "2. Megvizsgálni, hogy egy szám pallindróm-e" << endl;
    cout << "3. Megkeresni két szám legnagyobb közös osztóját" << endl;
    cout << "0. Kilépni" << endl;
    cin >> n;
    while (n>0)
    {
        cout << "a szam: ";
        cin >> a;
        if (n==1)
        {
            if (prim(a))
            {
                cout << "a szam prim" << endl;
            }
            else
            {
                cout << "a szam nem prim"<< endl;
            }
        }
        if (n==2)
        {
            if (pallindrom(a))
            {
                cout << "a szam pallindrom"<< endl;
            }
            else
            {
                cout << "a szam nem pallindrom"<< endl;
            }
        }
        if (n==3)
        {
            cout << "a masodik szam: ";
            cin >> b;
            cout << "a ket szam legnagyobb kozos osztoja: "<< lnko(a,b)<< endl;
        }
        cout << endl;
        cout << "Mit szeretnél csinálni?" << endl<< "1. Megvizsgálni, hogy egy szám prím-e" << endl;
        cout << "2. Megvizsgálni, hogy egy szám pallindróm-e" << endl;
        cout << "3. Megkeresni két szám legnagyobb közös osztóját" << endl;
        cout << "0. Kilépni" << endl;
        cin >> n;
    }
    return 0;
}
