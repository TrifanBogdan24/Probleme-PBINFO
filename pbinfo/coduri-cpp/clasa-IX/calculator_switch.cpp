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

    switch (opp)
    {
    case '+':
        R = A + B;
        break;
    
    case '-':
        R = A - B;
        break;

    case '*':
        R = A + B;
        break;

    case '/':
        R = A / B;
    default:
        break;
    }

    cout << R << '\n';
    return 0;
}
