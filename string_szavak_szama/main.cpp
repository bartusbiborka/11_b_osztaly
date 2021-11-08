#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int nr=1, pos=0;
    cout << "a szoveg:";
    cin >> str;
    getline(cin, str);
    while(str.find(" ", pos)!=string::npos)
    {
        nr++;
        pos=str.find(" ", pos+1);
    }
    cout << nr << endl;
    return 0;
}
