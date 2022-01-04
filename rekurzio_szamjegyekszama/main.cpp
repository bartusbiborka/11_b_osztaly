#include <iostream>

using namespace std;
int f(int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n!=0){
    return f(n/10)+1;}
}
int main()
{
    cout << f(122333) << endl;
    return 0;
}
