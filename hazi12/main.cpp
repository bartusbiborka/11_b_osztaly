#include<iostream>
using namespace std;
struct lista
{
    int szam;
    string nev;
    lista * kov;
};
int main()
{
    lista * mutato = NULL;
    int n;
    cout << "n= " ;
    cin >> n ;
    for(int i=0; i<n; i++)
    {
        lista * ujelem = new lista;
        cout << "Kerem a szamot " ;
        cin >>ujelem->szam ;
        cout << "Kerem a nevet " ;
        cin >> ujelem->nev;
        ujelem->kov  = mutato;
        mutato = ujelem;
    }
    lista * tempmutato = mutato;
    int max=0;
    string megoldas;
    while(mutato)
    {
        if(mutato->szam > max)
        {
            max=mutato->szam;
            megoldas = mutato->nev;
        }
        mutato = mutato->kov ;
    }
    cout << megoldas << endl;
    return 0;
}
