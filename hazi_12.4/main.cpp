#include <iostream>
#include <string>

using namespace std;

int main()
{
    string szoveg;
    getline (cin, szoveg);
    int nr=1, pos=0;
    string a[100];
    int i=0;
    while(szoveg.find(" ", pos)!=string::npos)
    {
        a[i]=szoveg.replace(szoveg.find(" ", pos), 1, " ");
        pos=szoveg.find(" ", pos+1);
        i++;
    }
    for (int j=0; j<i; j++){
        cout << a[i] << endl;
    }
    return 0;
}
