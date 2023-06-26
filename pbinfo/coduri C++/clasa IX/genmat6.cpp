// #215 - GenMat6
#include <iostream>
using namespace std;
int main()
{
    // declararea si initializarea variabilelor
    int n = 0, a[7][7];

    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 7; j++)
            a[i][j] = 0;


    cin >> n;

    // elementele de pe diagonala principala
    for (int i = 1; i <= 6; i++)
        a[i][i] = 0;

    // elementele de sub diagonale principala = elementele de deasupra
    for (int i = 1; i <= 6; i++)
    {
        for (int j = i + 1; j <= 6; j++)
            a[i][j] = a[j][i] = n % 10;

        n /= 10;
    }

    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
