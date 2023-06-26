// #209 - ElimCif
#include <iostream>

using namespace std;

int main()
{
    int n = 0, m = 0;
    
    cin >> n;
    m = (n / 100) * 10 + (n % 10);
    cout << m << '\n';

    return 0;
}
