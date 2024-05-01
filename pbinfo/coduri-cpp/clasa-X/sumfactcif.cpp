// #898 - SumFactCif
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int sumfactcif(int n)
{
    int sum = 0;
    do {
        int fact = 1;
        for (int i = 1; i <= n % 10; i++)
            fact *= i;
        
        sum += fact;
        n /= 10;
    } while (n);

    return sum;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cout << "Introuduceti numarul N = ";
    cin >> n;
    cout << "Suma factorialelor cifrelor lui " << n << " = " << sumfactcif(n) << '\n';
    return 0;
}
