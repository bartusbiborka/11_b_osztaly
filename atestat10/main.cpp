#include <iostream>
#include <vector>
using namespace std;
int inverz(int a)
{
    int ujszam=0;
    int temp=a;
    while (temp>0)
    {
        int szamjegy=temp % 10;
        temp=temp / 10;
        ujszam=ujszam*10+szamjegy;
    }
    return ujszam;
}
int main()
{
    int tomb[100];
    int n;
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> tomb[i];
    }
    for (int i=0; i<n; i++)
    {
        int oszto=0;
        int temp=tomb[i];
        while (temp>0)
        {
            int szamjegy=temp % 10;
            oszto=oszto+szamjegy;
            temp/=10;
        }
        if(inverz(tomb[i])%oszto==0)
        {
            cout << tomb[i] << " " << inverz(tomb[i]) << " " << oszto << endl;
        }
    }

    return 0;
}
