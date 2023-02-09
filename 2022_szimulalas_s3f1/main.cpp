#include <iostream>

using namespace std;

void rest(int x, int y, int n, int &k){
    for (int i=0; i<n; i++){
        if(i%x ==2 && i%y==2){
            k=i;
        }
    }
}
int main()
{
    int x, y, n, k=0;
    cout << "x=";
    cin >> x;
    cout << "y=";
    cin >> y;
    cout << "n=";
    cin >> n;
    rest(x,y,n,k);
    cout << k;
    return 0;
}
