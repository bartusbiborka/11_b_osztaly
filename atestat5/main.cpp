#include <iostream>

using namespace std;
int faktorialis(int n){
    int f=1;
for(int i=1; i<n+1; i++){
    f*=i;
}
    return f;
}
int main()
{
    int E=0, n;
    cout << "n=";
    cin >> n;
    for(int i=1; i<n+1; i++){
        if(i%2==0){
            E-=faktorialis(i);
        }else{
        E+=faktorialis(i);}
    }
    cout <<E;
    return 0;
}
