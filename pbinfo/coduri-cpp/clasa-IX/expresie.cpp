// #50 - Expresie
#include <iostream>

using namespace std;

int main ()
{
    long long prod = 1;
    long long suma = 0;
    int n = 0;

    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        prod *= i;
        suma += prod;
    }

    cout << "Rezultatul este " << suma;
    return 0;
}
