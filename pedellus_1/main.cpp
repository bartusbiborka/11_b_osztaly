#include <iostream>

using namespace std;

int main()
{
    int n, a[100], b[100];
    cout << "n=";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int j=0; j<n; j++){
        cin >> b[j];
    }
    int s1=0;
    for(int i=0; i<n; i++){
        if (a[i]%2==0){
            s1+=a[i];
        }
    }
    int s2=0;
    for(int j=0; j<n; j++){
        if (b[j]<s1 && b[j]%2==1){
            s2+=b[j];
        }
    }
    cout << s2;
    return 0;
}
