#include <iostream>

using namespace std;

int main()
{
    int m[100][100], n, S1=0, S2=0;
    cout << "n= ";
    cin >> n;
    for (int i=0; i< n; i++){
            for (int j=0; j<n; j++){
        cout << "m[" << i << "][" << j << "]=";
        cin >> m[i][j];
    }}
    for (int i=0; i< n; i++){
            S1 += m[i][i];

            for (int j=0; j<n; j++){
           if (i+j==n-1){
            S2+= m[i][j];
           }

    } }
    cout << "a foatlo elemeinek osszege: " << S1 << endl;
    cout << "a mellekatlo elemeinek osszege: " <<  S2 << endl;
    return 0;
}
