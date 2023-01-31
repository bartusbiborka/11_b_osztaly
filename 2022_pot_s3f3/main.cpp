#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main()
{
    ifstream in ("bac.txt");
    int aux, prev;
    int count_s;
    int s=1, max_s=INT_MIN;
    in >> prev;
    while (in >> aux){
        if(prev%2 == aux%2){
            s++;
        }else{
        if (s> max_s){
            max_s=s;
            count_s=1;
        }
        else if(s==max_s) count_s++;
        s=1;}
        prev=aux;
    }
    if (s==max_s && prev%2 == aux%2) count_s++;
    cout << count_s<< " " << max_s<< endl;
    return 0;
}
