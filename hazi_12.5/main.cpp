#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n, a[100][100];
    in >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            in >> a[i][j];
        }
    }
    double atlag1=0, atlag2=0;
    int a1=0, a2=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i<j && a[i][j]>0)
            {
                atlag1+=a[i][j];
                a1++;
            }
            if(i>j && a[i][j]>0)
            {
                atlag2+=a[i][j];
                a2++;
            }
        }
    }
    atlag1/=a1;
    atlag2/=a2;
    double x=atlag1-atlag2;
    out << x;
    in.close();
    out.close();
    return 0;
}
