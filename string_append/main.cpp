#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    name = "Kis";
    string keresztnev = "Pista Gyozo";
    name.append (" ");
    name.append ("Bela");
    name.append (" ");
    name.append(keresztnev);
    cout << name;
    return 0;
}
