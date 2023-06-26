// #2240 - Animale
#include <iostream>

using namespace std;

int main()
{
    int C = 0, P = 0, G = 0, S = 0;

    cin >> C;
    
    P = 2 * C;
    G = 2 * P;
    
    S = C + P + G;
    
    cout << S << '\n';
    return 0;
}
