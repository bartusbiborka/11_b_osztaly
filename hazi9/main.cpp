#include <iostream>

using namespace std;

int n(int k)
{
    if (k==1)
    {
        return 1;
    }
        if (k==2)
    {
        return 3;
    }
    return 2*n(k-1)+1;
}
int main()
{
    int k;
    cout << "k=";
    cin >> k;
    cout << n(k) << endl;
    return 0;
}
