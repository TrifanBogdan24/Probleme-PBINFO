// #235 - GenMat18
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // declararee si initializare variabile
    int n = 0, fib[100], A[10][10];
    
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            A[i][j] = fib[i * 10 + j] = 0;

    cin >> n;

    // constructia sirului Fibonacci
    fib[1] = 1;
    fib[2] = 1;
    
    for (int i = 3; i <= n * n; i++)
        fib[i] = fib[i - 2] + fib[i - 1];
   
    
    // constructia matricii
    int idx = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= n; j++)
            {
                A[i][j] = fib[idx++];
            }
        }
        else
        {
            for (int j = n; j >= 1; j--)
            {
                A[i][j] = fib[idx++];
            }
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
