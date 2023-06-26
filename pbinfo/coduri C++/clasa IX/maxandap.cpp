// #346 - MaxAndAp
#include <iostream>

using namespace std;

int n, nr_aparitii = 0;
long long v[1005], max_el;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    max_el = v[1];
    nr_aparitii = 1;

    for (int i = 2; i <= n; i++)
    {
        if (v[i] == max_el) nr_aparitii++;
        else if (v[i] > max_el)
        {
            max_el = v[i];
            nr_aparitii = 1;
        }
    }

    cout << max_el << " " << nr_aparitii;
    return 0;
}
