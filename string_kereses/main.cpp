#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str= "almafa es kortefa valamint barackfa";
    string s= "fa";
    size_t found =str.find(s);
    cout << found << endl;
    found=str.find(s, found+1);
    cout << found << endl;
    found = str.find (s, found+1);
    cout << found << endl;
    return 0;
}
