#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    string str2;
    cout << "elso szoveg: ";
    getline(cin, str1);
    cout << "masodik szoveg: ";
    getline(cin, str2);
    size_t pos=str2.find(" ");
    str1.append(str2, 0, pos);
    cout << str1 << endl;
    return 0;
}
