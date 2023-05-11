#include <iostream>

using namespace std;

int main()
{
    int n, v[100];
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    for(int bi=0; bi<n-1; bi++)
    {
        for(int ji=bi+1; ji<n+1; ji++)
        {
            if(v[bi]>v[ji])
            {
                swap(v[bi], v[ji]);
            }
        }
    }
    bool kiir=true;
    for(int i=0; i<n-1; i++)
    {
        if(v[i]!=v[i+1]+i+1)
        {
            kiir=false;
        }

    }
    if(kiir)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}
