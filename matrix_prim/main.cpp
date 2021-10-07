#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int v[100][100], n,i,j,m ;
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
            for (oszto=2; oszto < v[i][j]/2+1; oszto ++){
                if (v[i][j]%oszto ==0){
                   b++;
                }
            }
            if (b==0){
                out << "1 ";}else{
                out << "0 ";}
            }out << endl;
            }
    in.close();
    out.close();
    return 0;
}
