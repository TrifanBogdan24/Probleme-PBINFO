// #3169 - Plata2
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("monede.in");
ofstream g("monede.out");

int n, val[102], st[102], S, fr[1000];
int suma;
bool OK = 1;

struct nod {
    int cate;
    int bacn;
};

nod Q[1000];

void afis()
{
    int nr = 0;
    if (OK == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (st[i] != 0)
            {
                nr++;
                Q[nr].cate = st[i];
                Q[nr].bacn = val[i];
            }
        }

        if (nr == n)
        {
            for (int i = 1; i <= nr; i++)
                cout << Q[i].cate << ' ';

            cout << '\n';
            OK = 0;
        }
    }
}

void back(int k)
{
    if (k > n)
    {
        if (suma == S)
            afis();
    }
    else
    {
        int Min = min(S / val[k], fr[k]);
        
        for (int i = 1; i <= Min; i++)
        {

            st[k] = i;
            suma += i * val[k];
            
            if (suma <= S)
                back(k + 1);
            
            suma -= i * val[k];
        }
    }
}

int main()
{
    cin >> n >> S;
    
    for (int i = 1; i <= n; i++)
        cin >> val[i];
    
    for (int i = 1; i <= n; i++)
        cin >> fr[i];
    
    back(1);
    
    return 0;
}
