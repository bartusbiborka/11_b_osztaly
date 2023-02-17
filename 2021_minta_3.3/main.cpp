#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("cheltuieli.in");
    int s[101]= {0}, x, y, z, i=1, max=0;
    int szamlalo=0;
    in >> x;
    in >> y;
    in >> z;
    s[x]=s[x] + y*z;
    while (in >> x)
    {
        in >> y;
        in >> z;
        s[x]=s[x]+y*z;
        if(s[x]==max)
        {
            szamlalo++;
        }
        if(s[x]>max)
        {
            max=s[x];
            szamlalo=1;
        }
        i++;
    }
    cout << max << " "<< szamlalo;
    in.close();
    return 0;
}
