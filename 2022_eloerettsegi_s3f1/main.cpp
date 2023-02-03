#include <iostream>

using namespace std;
void patrate(int n, int &x, int &y)
{
    for(x=2; x<n/2; x++)
    {
        for(y=x+1; y<n/2; y++)
        {
            if(x*x*y*y==n)
            {
                return;
            }
        }
    }
    x=0;
    y=0;
    return;
}
int main()
{
    int n, x=1, y=1;
    cout << "n=";
    cin >> n;
    patrate(n, x, y);
    cout << x << " " << y;
    return 0;
}
