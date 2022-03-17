#include <iostream>

using namespace std;

int hatvany(int n)
{
    int oszto=2;
    int min1=99999;
    int min2=99999;
    while (n>1)
    {

        int szamlalo=0;
         cout << n << " " << oszto << " "<< szamlalo <<endl;
        while (n%oszto==0)
        {
            n/=oszto;
            szamlalo++;
        }
        if (szamlalo < min1)
        {
            min1=oszto;
            if (oszto<min2){
                min2=oszto;
            }

        }
        oszto++;
    }

    return min1;
}
int main()
{
    int n;
    cout << "n=";
    cin >> n;
    cout << hatvany(n) << endl;
    return 0;
}
