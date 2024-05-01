// #907 - AfisareNumerePare1

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void afisare(int a, int b)
{
    if (a > b)
        swap(a, b);
    
    if (a % 2 != 0)
        a++;
    
    while (a <= b)
    {
        cout << a << " ";
        a = a + 2;
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int a = 0, b = 0;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    afisare(a, b);

    return 0;
}
