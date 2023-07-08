// #3157 - cifre_c1c2
#include <iostream>

using namespace std;

int n, a, b, st[1000], c1, c2, v[4];
int pus[20];

void afis()
{
    for (int i = 1; i <= n; i++)
        cout << st[i];
    cout << '\n';
}

void back(int k)
{
    int i;

    if (k > n)
    {
        if (c1 == 0 && c2 == 0)
            afis();
    }
    else
    {
        for (int i = 1; i <= 2; i++)
        {
            if (i == 1)
            {
                st[k] = v[1];
                c2--;
            }
            else
            {
                st[k] = v[2];
                c1--;
            }
            back(k + 1);

            if (i == 1)
                c2++;
            else
                c1++;
        }
    }
}
int main()
{
    cin >> c1 >> c2;
    n = c1 + c2;

    if (c1 > c2)
        swap(c1, c2);
    
    v[1] = c1;
    v[2] = c2;

    back(1);
    
    return 0;
}
