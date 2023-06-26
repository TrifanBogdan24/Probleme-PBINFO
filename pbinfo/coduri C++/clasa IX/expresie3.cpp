// #335 - Expresie3
#include <iostream>
using namespace std;

int main ()
{
    int n = 0, suma = 0;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {   
        if (i % 2 != 0) suma += i * (i + 1);
        else suma -= i * (i + 1);
    }

    cout << "Rezultatul este " << suma;
    return 0;
}
