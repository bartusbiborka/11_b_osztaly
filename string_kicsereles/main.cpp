#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "a szoveg: ";
    getline (cin, str);
    size_t found=str.find("m");
    while(found!=string::npos)
    {
        str.replace(found, 1, "mpm");
        found=str.find("m", found+3);
    }
    cout << str;
    return 0;
}
