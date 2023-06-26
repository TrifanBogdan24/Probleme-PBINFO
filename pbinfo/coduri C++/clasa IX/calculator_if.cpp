// #1303 - Calculator
#include <iostream>

using namespace std;

int main()
{
    int A = 0, B = 0, R = 0;
    char opp = '.';

    cin >> A >> B;
    cin >> opp;
    
    if (A < B)
    {
        int aux = A;
        A = B;
        B = aux;
    }

    if (opp == '*') R = A * B;
    else if (opp == '+') R = A + B;
    else if (opp == '-') R = A - B;
    else if (opp == '/') R = A / B;

    cout << R << '\n';
    return 0;
}
