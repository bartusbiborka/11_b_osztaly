#include <iostream>

using namespace std;

int main()
{
    int v[100][100], n, S1=0, S2=0;
    cout << "n=";
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];
        }
    }
    for (int i=0; i < n; i++){
        for (int j=0; j < n; j++){
            if ( i+j < n-1){
                S1+=v[i][j];
            }
            if (i+j > n-1){
                S2+=v[i][j];
            }
        }
    }
    cout << "foatlo folotti elemek osszege: " << S1 << endl;
    cout << "foatlo alattin elemek osszege: " << S2 << endl;
    return 0;
}
