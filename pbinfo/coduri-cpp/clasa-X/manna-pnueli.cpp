// #828 - Manna-Pnueli
#include <iostream>

using namespace std;

// SOLTUIA PBINFO INCEPE AICI

int mp(int x)
{
    if (x >= 12)
        return x - 1;
    else
        return mp(mp(x + 2));
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int x = 0;
    cout << "x = ";
    cin >> x;

    cout << "mp (" << x << ") = " << mp(x) << '\n';
    return 0;
}
