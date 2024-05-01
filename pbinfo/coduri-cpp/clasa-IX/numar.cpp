// #467 - Numar
#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    cin >> n;
    int P = (n / 100) * (n % 10);
    cout << P << '\n';
    return 0;
}
