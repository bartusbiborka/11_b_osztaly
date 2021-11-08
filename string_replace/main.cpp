#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    name = "Kis";
    string keresztnev = "Pista Gyozo";
    name.replace (3,0, " ");
    name.replace (4,0,"Bela");
    cout << name;
    return 0;
}
