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
   
    for (int i = a; i <= b; i += 2)
        cout << i << " ";

    cout << '\n';
}

// SOLUTIA PBINFO SE TERMINA AICI
int main()
{
    int a = 0, b = 0;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    afisare(a, b);
    return 0;
}
