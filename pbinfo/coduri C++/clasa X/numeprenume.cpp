// #133 - NumePrenume
#include <iostream>
#include <cstring>

using namespace std;

char n[21], p[21];
int n1, m1;

int main()
{
    cin >> p;
    cin >> n;

    n1 = strlen(n);
    m1 = strlen(p);

    for (int i = 0; i < n1; i++)
        if (strchr("aeiuoAEIOU", n[i]) == NULL)
            cout << n[i];

    cout << " ";
    cout << p;

    return 0;
}
