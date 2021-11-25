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
    cout << "Mit szeretn�l csin�lni?" << endl<< "1. Megvizsg�lni, hogy egy sz�m pr�m-e" << endl;
    cout << "2. Megvizsg�lni, hogy egy sz�m pallindr�m-e" << endl;
    cout << "3. Megkeresni k�t sz�m legnagyobb k�z�s oszt�j�t" << endl;
    cout << "0. Kil�pni" << endl;
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
        cout << "Mit szeretn�l csin�lni?" << endl<< "1. Megvizsg�lni, hogy egy sz�m pr�m-e" << endl;
        cout << "2. Megvizsg�lni, hogy egy sz�m pallindr�m-e" << endl;
        cout << "3. Megkeresni k�t sz�m legnagyobb k�z�s oszt�j�t" << endl;
        cout << "0. Kil�pni" << endl;
        cin >> n;
    }
    return 0;
}
