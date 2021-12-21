#include <iostream>

using namespace std;
int hatvany(int n, int x)
{
    if (n==1)
    {
        return x;
    }
    return x * hatvany (n-1, x);
}
int main()
{
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << hatvany(a, b) << endl;
    return 0;
}
