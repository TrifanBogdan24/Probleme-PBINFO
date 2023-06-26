// #171 - PrimaCifraMinima
#include <iostream>

using namespace std;

int n, min_cif = 11;
long long a[10005], aux, rasp;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
    {
        aux = a[i];
        
        while (aux > 9)
            aux = aux/10;
        
        if (aux < min_cif)
        {
            min_cif = aux;
            rasp = a[i];
        }
        else if(aux==min_cif)
        {
            if (rasp < a[i])
                rasp = a[i];

        }
    }
    
    cout << rasp;
    return 0;
}
