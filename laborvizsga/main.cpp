#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int v[100][100], SE=0, SD=0, ujszam=0, ideiglenes=1, szamjegy, i ,j, n;
    in >> n;
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            in >> v[i][j];
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            ujszam=0;
            ideiglenes=v[i][j];
            while (ideiglenes>0){
                szamjegy=ideiglenes%10;
                ideiglenes = ideiglenes/10;
                ujszam=ujszam*10+szamjegy;
            }
            if (ujszam == v[i][j]){
                if (i<j && i+j < n-1){
                    SE += v[i][j];
                }
                if (i>j && i+j > n-1){
                    SD += v[i][j];
                }
            }
        }
    }
     if (SE>SD){
        cout << SE;
     }
     if (SD>SE){
        cout << SD;
     }
    in.close();
    return 0;
}
