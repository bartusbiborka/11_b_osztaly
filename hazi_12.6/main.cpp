#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100];
    double atlag=0;
    int szamlalo=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i][j]>0)
            {
                atlag+=a[i][j];
                szamlalo++;
            }
        }
    }
    if(atlag==0)
    {
        cout << "Nincs";
    }
    else
    {
        cout << (atlag/szamlalo);
    }
    return 0;
}
