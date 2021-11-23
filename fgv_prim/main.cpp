#include <iostream>

using namespace std;

bool prim(int a){
    for (int oszto=2; oszto<a/2+1; oszto++){
        if (a%oszto==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int a;
    cout << "a=";
    cin >> a;
    if  (prim(a)){
        cout << "A szam prim";
    } else {
        cout << "A szam nem prim";}
    return 0;
}
