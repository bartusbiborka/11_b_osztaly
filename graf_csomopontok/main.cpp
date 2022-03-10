#include <iostream>
#include <fstream>

using namespace std;

int fuggveny(int m[100][100], int x, int N)
{
    int db=0;
    for (int i=1; i<N+1; i++)
    {
        db+=m[x][i];
    }
    return db;
}
int main()
{
    ifstream in("input.txt");
    int v[100][100];
    int N;
    in >> N;
    for (int i=1; i<N+1; i++)
    {
        for(int j=1; j<N+1; j++)
        {
            in >> v[i][j];
        }
    }
    int x;
    cout << "Kerem a csomopontot: ";
    cin >> x;
    cout << "Ennyi csomoponttal van osszekottetese: " << fuggveny(v,x,N) << endl;
    int csp[2][N+1];
    for(int i=1; i<N+1; i++){
        csp[0][i] = fuggveny (v, i, N);
        csp[1][i] = i;
    }
    for(int i=1; i<N-1; i++)
    {
        for(int j=i+1; j<N+1; j++)
        {
            if(csp[0][i] > csp[0][j])
            {
                swap(csp[0][i], csp[0][j]);
                swap(csp[1][i], csp[1][j]);
            }
        }
    }
    for(int i=1; i<N+1; i++)
    {
        cout << csp[1][i] << " ";
    }
    in.close();
    return 0;
}
