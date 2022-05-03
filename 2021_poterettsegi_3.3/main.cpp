#include <iostream>
#include <fstream>
using namespace std;
int digit(int n)
{
    int first=n/10;
    int last=n%10;
    if(first>last)
    {
        return last*10+first;
    }
    else
    {
        return first*10+last;
    }
}
int main()
{
    ifstream in("numere.in");
    int na, nb, x;
    int szamlalo=0;
    int stat[100]= {0};
    in >> na;
    in >> nb;
    for(int i=0; i<na; i++)
    {
        in >> x;
        int nr=digit(x%100);
        stat[nr]++;
    }
    for(int i=0; i<nb; i++)
    {
        in >> x;
        int nr=digit(x%100);
        szamlalo+=stat[nr];
    }
    cout << szamlalo << endl;
    in.close();
    return 0;
}
