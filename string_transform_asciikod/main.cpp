#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "szoveg: ";
    getline(cin,str);
    string s;
    cout << "kis vagy nagybetus legyen a szoveg?";
    cin >> s;
    int pos= 'a'-'A';
    for (int i=0; i<str.size(); i++){
        if (s=="nagy"){
            if (str[i] >= 'a'){
                str[i] -= pos;
            }
        }
        if (s=="kis"){
            if (str[i] <= 'Z'){
                str[i] += pos;
            }
        }
    }
    cout << str << endl;
    return 0;
}
