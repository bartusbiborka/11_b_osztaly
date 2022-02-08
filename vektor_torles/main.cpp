#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, x;
    cout << "n=";
    cin >> n;
    vector<int> tomb;
    for (int i=0; i<n; i++)
    {
        cout << "tomb[" << i << "]=";
        cin  >> x;
        tomb.push_back(x);
    }
    tomb.pop_back();
    n--;
    for (int i=0; i<n; i++)
    {
        cout << tomb[i] << " ";
    }
    return 0;
}
