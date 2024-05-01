// #226 - GenMat13
#include <iostream>

using namespace std;
int main()
{
    // declararea si initializarea variabilelor
    int n = 0, a = 0, b = 0, A[30][30];

    for (int i = 0; i < 30; i++)
        for (int j = 0; j < 30; j++)
            A[i][j] = 0;

    cin >> n >> a >> b;
    
    // construirea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i > a && j < b) A[i][j] = 3;
            else if (i > a && j > b) A[i][j] = 4;
            else if (i < a && j < b) A[i][j] = 1;
            else if (i < a && j > b) A[i][j] = 2;
        }
    }

    // afisare matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << A[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
