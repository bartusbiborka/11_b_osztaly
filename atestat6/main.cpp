#include <iostream>
#include <fstream>
using namespace std;
bool paros(int a)
{
    int temp=a;
    while(a>0)
    {
        int szamjegy = a%10;
        if(szamjegy%2!=0)
        {
            return false;
        }
        a=a/10;
    }
    return true;
}
int main()
{
    ifstream in("atestat.in");
    int a;
    while(in >> a)
    {
        if(paros(a))
        {
            cout << a << " ";
        }
    }
    in.close();
    return 0;
}
