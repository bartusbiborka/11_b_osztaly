#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("bac.txt");
    int n, k3=0, k5=0;
    cout << "n=";
    cin >> n;
    for(int i=1; i<n+1; i++)
    {
        int j=i;
        while(j%3==0)
        {
            k3++;
            j/=3;
        }
        while(j%5==0)
        {
            k5++;
            j/=5;
        }
    }
    k3 = k3/2;
    if (k3 > k5)
    {
        out << k5;
    }
    else
    {
        out << k3;
    }
    out.close();
    return 0;
}
