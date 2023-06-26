// #363 - sumcif2
#include <iostream>
using namespace std;

void print_number(int nr, int v[15])
{
    cout << '\n';
    for (int i = 1; i <= nr; i++)
        cout << v[i];
    cout << '\n';
}
int main()
{
    int n = 0, sum = 0, nr_cifs = 0, cif[15];
    cin >> n;

    // initializam vectorul de cifre cu toate elementele egale cu 0
    nr_cifs = 0;
    for (int i = 0; i < 15; i++)
        cif[i] = 0;

    // memoram cifrele lui n intr-un vector
    do {
        cif[++nr_cifs] = n % 10;
        n = n /10;
    } while (n);

    // inversam vectorul pentru a-l obtine pe n
    for (int i = 1; i <= nr_cifs / 2; i++)
    {
        int aux = cif[i];
        cif[i] = cif[nr_cifs - i + 1];
        cif[nr_cifs - i + 1] = aux;
    }

    // print_number(nr_cifs, cif);

    // facem suma elementelor de pe pozitiil impare din vector
    sum = 0;
    for (int i = 1; i <= nr_cifs; i = i + 2)
        sum += cif[i];

    cout << sum;
    return 0;
}
