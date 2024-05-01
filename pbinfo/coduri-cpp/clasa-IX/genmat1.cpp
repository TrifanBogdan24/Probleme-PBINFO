// #206 - GenMat1
#include <iostream>

using namespace std;

int main()
{
    // declarare si initializarea matricii
    int n = 0, m = 0, A[21][21];

    for (int i = 0; i < 21; i++)
        for (int j = 0; j < 21; j++)
            A[i][j] = 0;
    
    cin >> n >> m;
    
    // construirea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i <= j)
                A[i][j] = i;
            else
                A[i][j] = j;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << A[i][j] << " ";
        cout << '\n';
    }
    
    return 0;
}
