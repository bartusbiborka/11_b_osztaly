#include <iostream>

using namespace std;

int main()
{
    int m[100][100], n, PE=1, PK=1, PD=1, PNY=1;
    cout << "n=";
    cin >> n;
    for (int i=0; i < n; i++){
        for (int j=0; j<n; j++){
            cout << "m[" << i << "][" << j << "]=" ;
            cin >> m[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j <n; j++){
            if (i<j && i+j< n-1){
                PE *= m[i][j];
            }
            if (i<j && i+j>n-1){
                PK *= m[i][j];
            }
            if (i>j && i+j > n-1){
                PD *= m[i][j];
            }
            if ( i> j && i+j < n-1){
                PNY *= m[i][j];
            }
        }
            }
    cout << "eszaki haromszog: " << PE << endl;
    cout << "keleti haromszog: " << PK << endl;
    cout << "deli haromszog: " << PD << endl;
    cout << "nyugati haromszog: " << PNY << endl;
    return 0;
}
