#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int v[100][100], n, SE=0, SD=0;
    in >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            in >> v[i][j];
        }
    }
     for (int i=0; i<n; i++){
        for (int j=0; j <n; j++){
            if (i<j && i+j< n-1){
                SE += v[i][j];
            }
            if (i>j && i+j > n-1){
                SD += v[i][j];
            }
        }
            }
    cout << "eszaki: " << SE << endl << "deli: " << SD << endl;
    if (SE > SD){
        cout << "az eszaki haromszog elemeinek osszege nagyobb";
    } else {
        cout << "a deli haromszog elemeinek osszege nagyobb ";}
    in.close();
    return 0;
}
