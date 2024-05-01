// #159 - inserareDupa
#include <iostream>

using namespace std;

void insertion(int &n, int v[55], int poz, int x)
{
 
    for (int i = n; i >= poz; i--)
        v[i + 1] = v[i];
    n++;
    v[poz] = x;
}

void citire(int &n, int v[55])
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

}
void afisare(int n, int v[55])
{
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    cout << '\n';
}

int main()
{
    int n = 0, v[55];

    for (int i = 0; i < 55; i++)
        v[i] = 0;

    citire(n, v);

    int i = 1;
    while (i <= n)
    {
        if (v[i] % 2 == 0)
        {
            insertion(n, v, i + 1, v[i] * 2);
            i = i + 2;
        }
        else
            i++;
    }

    afisare(n, v);
    return 0;
}
