// #1510 - FCautare
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int cautare(int n, double X[100], double v)
{
    for (int i = 0; i < n; i++)
        if (X[i] == v)
            return i;

    return (-1);    // valoarea v nu se afla in vector
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    double v[100], val;
    for (int i = 0; i < 100; i++)
        v[i] = 0.0;

    cout << "n = ";
    cin >> n;

    cout << "elementele vectorului : ";
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    cout << "valoarea de cautat = ";
    cin >> val;

    cout << "pozitia la care apare = " << cautare(n, v, val) << '\n';
    return 0;
}

/* exemplu input
6
9.5 16.3 28.3 49.7 52.4 73
52.4 
*/
