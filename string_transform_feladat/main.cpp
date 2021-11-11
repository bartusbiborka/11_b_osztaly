#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "szoveg: ";
    getline(cin,str);
    string s;
    cout << "kis vagy nagybetus legyen a szoveg?";
    cin >> s;
    if (s=="kis")
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    else if(s=="nagy")
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    cout << str << endl;

    return 0;
}
