#include<iostream>
using namespace std;

struct lista
{

    int ertek;
    lista * kov;

};


int main()
{

    lista * mutato = NULL;
    int i;
    int n;
    cout << "n=";
    cin >> n;
    for(i=0; i<n; i++)
    {
        int x;
        cout << "x=";
        cin >> x;
        lista * ujelem = new lista;
        ujelem->ertek = x;
        ujelem->kov  = mutato;
        mutato = ujelem;
    }
    int min=999;
    while(mutato)
    {
        if(mutato->ertek < min)
        {
            min=mutato->ertek;
        }
        mutato = mutato->kov ;
    }
    cout << min << endl;
    return 0;

}
