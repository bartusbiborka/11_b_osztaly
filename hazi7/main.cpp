#include <iostream>

using namespace std;
void cuburi(int n)
{
    int v[103];
    for (int i=1; i<n+1; i++)
    {
        v[i]=i*i*i;
    }
    for (int i=n; i>0; i--)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    int n, v[103];
    cout << "n=";
    cin >> n;
    cuburi(n);
    return 0;
}
