// #336 - Expresie4
#include <iostream>

using namespace std;


int main ()
{
    int n = 0, suma = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
        suma = suma + i * (n - i + 1);
    
    cout << "Rezultatul este " << suma;
    return 0;
}
