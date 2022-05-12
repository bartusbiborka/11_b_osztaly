#include <iostream>
#include <fstream>

using namespace std;

int sub(int n)
{
    int S=0;
    int b1,b2,b3;
    b1=n%10;
    n=n/10;
    b2=n%10;
    n=n/10;
    b3=n%10;
    n=n/10;
}
bool echilibrat(int p)
{
    if(p%2==0)
    {
        int x=p%1000;
        int y=p/1000;
        if(sub(x)==sub(y))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ifstream in("def.in");
    int v[10000];
    int i=0;
    while(in >> v[i])
    {
        i++;
    }
    int max1=0;
    for(int j=0; j<i; j++)
    {

        if(v[j]>max1 && echilibrat(v[j]))
        {
            max1=v[j];
        }
    }
    int max2=0;
    for(int j=0; j<i; j++)
    {

        if(v[j]>max2 && echilibrat(v[j]) && v[j]!=max1)
        {
            max2=v[j];
        }
    }
    cout << max1 <<" " << max2;
    in.close();
    return 0;
}
