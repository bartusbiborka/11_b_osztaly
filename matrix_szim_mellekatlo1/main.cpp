#include <iostream>

using namespace std;

int main()
{
    int m[100][100], n;
    cout << "n= ";
    cin >>  n;
    for (int i=0; i < n; i++){
        for (int j=i+1; j<n; j++){
            cout << "m[" << i << "][" << j << "]=";
            cin >> m[i][j];
            m[j][i] = m[i][j];
        }
    }
    for (int i=0; i<n; i++){
        m[i][i]=1;
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
        cout << m[i][j] << " " ;
    }cout << endl;
    }


   return 0;
}
