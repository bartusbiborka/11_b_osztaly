#include <iostream>

using namespace std;

int joc(int n)
{
    int k=0;
    for (int i=2; i<n+1; i++)
    {
        if (n%i==0)
        {
            k++;
        }
    }
    return k;
}
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    cout << joc(n);
    return 0;
}
