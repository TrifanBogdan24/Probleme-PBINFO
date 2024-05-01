// #1287 - CifreGen
#include <iostream>
#include <fstream>

using namespace std;

int n, a, b, st[1000], pus[20];

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
        afis();
    else
    {
        for (int i = a; i <= b; i++)
        {
            st[k] = i;
            back(k + 1);
        }
    }
}
int main()
{
    cin >> a >> b >> n;
    
    if (a > b)
        swap(a, b);
    
    back(1);
    return 0;
}
