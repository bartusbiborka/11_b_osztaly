#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
   int i,j,m[100][100], n;
   cout << "n=";
   cin >> n;
   for (i=0; i<n; i++){
    for (j=0; j<n; j++){
        cout << "m[" << i << "][" << j << "]=";
        cin >> m[i][j];
    }
   }
   for (i=0; i<n; i++){
        m[i][i]=0;
         for (j=0; j<n; j++){
            if (i>j){
                m[i][j] = -m[i][j];
   }
    }
   }
    for (i=0; i<n; i++){
    for (j=0; j<n; j++){
        cout << m[i][j] << " ";
    } cout << endl;}

    return 0;
}
