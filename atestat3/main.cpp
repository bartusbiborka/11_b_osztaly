#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cout << "n=";
    cin >> n;
    int szamlalo=0;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        int max=0;
        while(x>0)
        {
            int szamjegy=x%10;
            if(szamjegy>max)
            {
                max=szamjegy;
            }
            x=x/10;
        }
        if(max%2!=0)
        {
            szamlalo++;
        }
    }
    cout << szamlalo;
    return 0;
}
