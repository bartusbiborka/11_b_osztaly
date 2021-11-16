#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "szoveg: ";
    cin >> str;
    swap (str[0], str[str.size()-1]);
    for (int i=1; i<str.size(); i++){
        swap(str[i], str[str.size()-1]);
    }
    cout << str;
    return 0;
}
