#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.in");
    ofstream out("output.out");
    int na, nb;
    in >> nb;
    in >> na;
    int a, b;
    int v[10000]={0};
    for(int i=0; i<nb; i++){
        in >> b;
        v[b]=1;
    }
    for(int i=0; i<na; i++){
        in >> a;
        if(v[a]==0){
            v[a]=1;
        }else{
        v[a]=2;}
    }
    for (int i=1; i<na+nb; i+=2){
        if(v[i]==1){
            cout << i << " ";
        }
    }

    in.close();
    out.close();
    return 0;
}
