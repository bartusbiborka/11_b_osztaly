#include <iostream>
#include <fstream>
using namespace std;

struct diak
{
    string nev;
    string szemszin;
    int magyar;
    int roman;
    int matek;
    int fizika;
    int eletkor;
} v[100];

int main()
{
    ifstream nev("nev.txt");
    ifstream szemszin("szemszin.txt");
    ifstream magyar("magyar.txt");
    ifstream roman("roman.txt");
    ifstream matek("matek.txt");
    ifstream fizika("fizika.txt");
    ifstream eletkor("eletkor.txt");
    int i=0, j;
    double atlag[100];
    while(nev >> v[i].nev)
    {
        szemszin >> v[i].szemszin;
        magyar >> v[i].magyar;
        atlag[i]+=v[i].magyar;
        roman >> v[i].roman;
        atlag[i]+=v[i].roman;
        matek >> v[i].matek;
        atlag[i]+=v[i].matek;
        fizika >> v[i].fizika;
        atlag[i]+=v[i].fizika;
        eletkor >> v[i].eletkor;
        i++;
        j=i;
    }
    for (i=0; i<j; i++)
    {
        atlag[i]= atlag[i]/4;
        cout << atlag[i] << endl;
    }

    double max=atlag[0];
    for(int i=0; i<j; i++)
    {
        if (v[i].szemszin == "barna")
        {
            if (atlag[i] > max)
            {
                max=atlag[i];
            }
        }
    }
    for(int i=0; i<j; i++)
    {
        if (atlag[i] == max)
        {
            cout << "A legjobban tanulo barna szemu diak neve " << v[i].nev << ", es a fizika lezarasa " << v[i].fizika << endl;
        }
    }

    int min=v[0].eletkor;
    for(int i=0; i<j; i++)
    {
        if (v[i].eletkor < min)
        {
                min=v[i].eletkor;

    }}
    for(int i=0; i<j; i++)
    {
        if (v[i].eletkor == min)
        {
            cout << "A legfiatalabb diak neve " << v[i].nev << ", szemszine " << v[i].szemszin << ", magyar lezarasa " << v[i].magyar << endl;
        }
    }
   max=v[0].magyar;
      for(int i=0; i<j; i++)
    {
            if (v[i].magyar > max)
            {
                max=v[i].magyar;

            }
        }
for(int i=0; i<j; i++)
    {
        if (v[i].magyar == max)
        {
            cout << "A legjobb magyaros diak eletkora " << v[i].eletkor << ", szemszine " << v[i].szemszin << endl;
        }
    }

    nev.close();
    szemszin.close();
    magyar.close();
    roman.close();
    matek.close();
    fizika.close();
    eletkor.close();
    return 0;
}
