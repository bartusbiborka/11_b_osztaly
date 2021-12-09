#include <iostream>
#include <stdlib.h>
using namespace std;
void lenullaz(int v[], int n)
{
    for (int i=0; i<n; i++)
    {

        v[i]=0;

    }
}
void feltolt(int v[], int n)
{

    for (int i=0; i<n; i++)
    {

        v[i]=rand()%100;

    }
}
void rendez(int v[], int n)
{

    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (v[i]>v[j])
            {
                swap(v[i], v[j]);
            }


        }
    }
}
void kiir (int v[], int n)
{
    for (int i=0; i<n; i++)
    {

        cout << v[i] << " ";

    }
    cout << endl;
}
int main()
{
    int v[1000], n=10;
    kiir(v, n);
    lenullaz(v, n);
    kiir(v, n);
    feltolt(v, n);
    kiir(v, n);
    rendez(v, n);
    kiir(v, n);
    return 0;
}
