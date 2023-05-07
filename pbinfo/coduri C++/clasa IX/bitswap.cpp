// #2910 - BitSwap
#include <iostream>
using namespace std;

int main()
{
    // ^ - XOR (sau exclusiv)
    //   - are valoarea 1 cand biti sunt diferiti
    //   - si are valoarea 0 cand sunt identici
    
    /*
    0 ^ 0 = 0
    0 ^ 1 = 1
    1 ^ 0 = 1
    1 ^ 1 = 0

    110 ^
    011 =
    101 
    */
    int n = 0, m = 0;
    cin >> n >> m;
    n ^= m;
    m ^= n;
    n ^= m;
    cout << n << ' ' << m;
    return 0;
}
