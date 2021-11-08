#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Mi a neved?"<< endl;
    name = "Bartus Biborka";
    cout << "Hello, " << name  << "!" << endl;
    //vagy: string name("Bartus Biborka");
    //getline (cin, name);
    cout << name.size();
    return 0;
}
