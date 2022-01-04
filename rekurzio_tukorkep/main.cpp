#include <iostream>

using namespace std;

int tukor(long int a)
{
    if(a<10)
    {
        return a;
    }
    int x=a;
    int h=1;
    while(x>10)
    {
        x /= 10;
        h *= 10;
    }
    return a%10*h+tukor(a/10);
}

int main()
{
    cout <<tukor(197);
    return 0;
}
