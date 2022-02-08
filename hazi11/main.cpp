#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,x;
    cout << "n=";
    cin >> n;
    vector<int> tomb;
    for (int i=0; i<n; i++)
    {
        cout << "tomb[" << i << "]=";
        cin  >> x;
        tomb.push_back(x);
    }
    int pos, hossz;
    cout << "pos=";
    cin >> pos;
    cout << "hossz=";
    cin >> hossz;
    tomb.erase(tomb.begin()+pos, tomb.begin()+pos+hossz);
    for (int i=0; i<tomb.size(); i++)
    {
        cout << tomb[i] << " ";
    }
    return 0;
}
