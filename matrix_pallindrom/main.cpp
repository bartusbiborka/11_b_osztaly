#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int v[100][100], n,i,j,m ;
    int ideiglenes[100][100], szamjegy, ujszam[100][100];
    in >> n;
    in >> m;
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            in >> v[i][j];
        }
    }
    int oszto, b=0;
    for (i=0; i<n; i++){
        for (j=0; j <m; j++){
            b=0;
            ujszam[i][j]=0;
    ideiglenes[i][j]=v[i][j];
    while (ideiglenes[i][j]>0)
    {
        szamjegy=ideiglenes[i][j] % 10;
        ideiglenes[i][j]=ideiglenes[i][j]/ 10;
        ujszam[i][j]=ujszam[i][j]*10+szamjegy;
    }
            if (ujszam[i][j]==v[i][j]){
                out << "1 ";}else{
                out << "0 ";}
            }out << endl;
            }

    in.close();
    out.close();
    return 0;
}
