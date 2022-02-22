#include <iostream>
#include <vector>
using namespace std;
int N = 4;
string virag[] = {"eper", "alma", "sargadinnye", "korte", "narancs"};

bool lehet(vector<string> ruhak, string ujruha)
{
    for(int i = 0; i<ruhak.size(); i++)
    {
        if (ruhak[i] == ujruha)
        {
            return false;
        }
    }
    if (ujruha == "narancs")
    {
        for(int i = 0; i<ruhak.size(); i++)
        {

            if (ruhak[i] == "sargadinnye")
            {
                return false;
            }
        }


    }
    if (ujruha == "sargadinnye")
    {
        for(int i = 0; i<ruhak.size(); i++)
        {
            if (ruhak[i] == "narancs")
            {
               return false;
            }

        }

    }
    return true;
}
void kiir(vector<string> csokor)
{
    for(int i = 0; i<csokor.size(); i++)
    {
        cout << csokor[i] << " " ;
    }
    cout << endl;
    return;
}
void backtrack(vector<string> koktel, int index)
{
    if (koktel.size() == N)
    {
        kiir(koktel);
        return;
    }
    for(int i = 0; i<5; i++)
    {
        if (lehet(koktel, virag[i]))
        {
            vector<string> tempcsokor;
            for(int j = 0; j<koktel.size(); j++)
            {
                tempcsokor.push_back(koktel[j]);
            }
            tempcsokor.push_back(virag[i]);
            backtrack(tempcsokor, i);
        }
    }
}

int main()
{
    vector<string> koktel;
    backtrack(koktel, 0);
    return 0;
}
