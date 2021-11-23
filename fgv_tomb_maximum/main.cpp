#include <iostream>

using namespace std;

int maxim(int v[], int n)
{
    int max=v[0];
    for (int i=0; i<n; i++)
    {
        if (v[i] >max)
        {
            max=v[i];
        }
    }
    return max;
}

int main()
{
    int v[100]={1,2,3,4,5,6,7,8,9,10};
    cout << maxim(v,10);
    return 0;
}
