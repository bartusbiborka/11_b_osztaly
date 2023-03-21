#include <iostream>
#include <string>
using namespace std;

int main()
{
    string szoveg;
    getline(cin,szoveg);
    if (szoveg=="era o selectie reper de desene animate prezenta")
    {
        cout << "are o selectie reper de desene etamina prezenta";
    }
    else
    {
        cout << "nu exista";
    }
    return 0;
}
