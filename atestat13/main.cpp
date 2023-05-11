#include <iostream>

using namespace std;
int szam(int x)
{
    int szamlalo=0;
    while(x>0)
    {
        x/=10;
        szamlalo++;
    }
    return szamlalo;
}
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    int a[100];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int counter=0;
    for(int i=0; i<n-1; i++)
    {
        if(szam(a[i])>szam(a[n-1]))
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}
