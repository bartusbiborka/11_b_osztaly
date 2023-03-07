#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.in");
    int a[100];
    int i=0;
    while (in >> a[i])
    {
        i++;
    }
    int j=0;
    while ( a[j] < 0)
    {
        j++;
    }
    int k=i-1;
    while(a[k] < 0)
    {
        k--;
    }
    if((i-j) > k)
    {
        cout << i-j;
    }
    else
    {
        cout << k;
    }
    in.close();
    return 0;
}
