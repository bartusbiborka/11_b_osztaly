#include <iostream>

using namespace std;

int main()
{
    int n, S=0;
    cout << "n=";
    cin >> n;
    while(n>0)
    {
        S+=n;
        n/=10;
    }
    cout << S;
    return 0;
}
