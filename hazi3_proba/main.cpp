#include <iostream>
#include <string>
using namespace std;

int main()
{
    string m[100];
    string str;
    cout << "szoveg: ";
    cin >> str;
    m[0]="a";
    m[1]="e";
    m[2]="i";
    m[3]="o";
    m[4]="u";
    for (int i=0; i<4; i++)
    {
        size_t found=str.find(m[i]);
        while(found!=string::npos)
        {
            str.replace(found, 1, "mpm");
            found=str.find(m[i], found+3);
        }
    }
    size_t keres=str.find("p");
    for(int j=0; j<str.size(); j++){
    while(keres!=string::npos)
        {
            str.insert(keres, "Z");
            keres=str.find("p", keres+1);
        }}
    cout << str << endl;
    return 0;
}
