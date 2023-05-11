#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("unice.out");
    int n;
    cout << "n=";
    cin >> n;
    float a[1000];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n; i++)
    {
        int szamlalo=0;
        float temp=a[i];
        for(int j=0; j<n; j++)
        {
            if(a[j]==temp)
            {
                szamlalo++;
            }
        }
        if(szamlalo==1)
        {
            out << temp << " ";
        }
    }
    out.close();
    return 0;
}
