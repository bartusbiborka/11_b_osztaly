#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("input.txt");
    int m[100][100], n, SE=0, SK=0, SD=0, SNY=0;
    in >> n;
    for (int i=0; i < n; i++){
        for (int j=0; j<n; j++){
            in >> m[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j <n; j++){
            if (i<j && i+j< n-1){
                SE += m[i][j];
            }
            if (i<j && i+j>n-1){
                SK += m[i][j];
            }
            if (i>j && i+j > n-1){
                SD += m[i][j];
            }
            if ( i> j && i+j < n-1){
                SNY += m[i][j];
            }
        }
            }
    cout << "eszaki haromszog: " << SE << endl;
    cout << "keleti haromszog: " << SK << endl;
    cout << "deli haromszog: " << SD << endl;
    cout << "nyugati haromszog: " << SNY << endl;
    in.close();
    return 0;
}
