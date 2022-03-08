#include <iostream>
#include <fstream>
int m[100][100];
int n=5;
using namespace std;
bool fuggveny(int a, int b)
{
    if(m[a][b] > 0)
    {
        return true;
    }
    return false;
}
int el(int c){
    int szamlalo=0;
    for(int j=1; j<n; j++){
        if (m[c][j]>0){
            szamlalo++;
        }
    }
    return szamlalo;
}
int main()
{
ifstream in("input.txt");
    for (int i=0; i < n; i++)
    {
        for (int j=0; j<n; j++)
        {
            in >> m[i][j];
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout << m[i][j] << " " ;
        }
        cout << endl;
    }
    int a, b;
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    if (fuggveny(a, b))
    {
        cout << "van" << endl;

    }
    else
    {
        cout << "nincs" << endl;
    }
    int c;
    cout << "c=";
    cin >> c;
    cout << "a " << c << " csomopont " << el(c) << " mas csomoponttal van osszekottetesben" << endl;
    in.close();
    return 0;
}
