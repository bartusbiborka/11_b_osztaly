#include <iostream>

using namespace std;

int main()
{
    int v[100][100], n, Sf=0, Sm=0, m;
    cout << "n=";
    cin >> n;
    cout << "m=";
    cin >> m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << "v[" << i << "][" << j << "]=";
            cin >> v[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i+j==n-1){
                Sm += v[i][j];
            }
        }
        Sf += v[i][i];
    }
    cout << "a foatlo elemeinek osszege: " << Sf << endl;
    cout << "a mellekatlo elemeinek osszege: " << Sm << endl;
    return 0;
}
