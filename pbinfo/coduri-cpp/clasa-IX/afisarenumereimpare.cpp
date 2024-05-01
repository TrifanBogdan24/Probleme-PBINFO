// #331 - AfisareNumereImpare
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    
    cin >> n;
    
    for (int i = n; i >= 1; i--)
        cout << (2 * i - 1) << " ";

    cout << '\n';
    return 0;
}
