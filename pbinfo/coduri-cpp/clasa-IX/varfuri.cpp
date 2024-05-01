// #277 - Varfuri
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("planta.in");
ofstream g("planta.out");
int v[1005], n, nr;

int main()
{
    cin >> n >> v[1] >> v[2];
    for (int i = 3; i <= n; i++)
    {
        cin >> v[i];
        if (v[i - 2] < v[i - 1] && v[i - 1] > v[i])
            nr += v[i - 1];
    }
    cout << nr;
    f.close();
    g.close();
    return 0;
}
