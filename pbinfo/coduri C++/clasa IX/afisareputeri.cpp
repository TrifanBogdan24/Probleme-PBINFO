// #348 - AfisarePuteri
#include <iostream>

using namespace std;

int main()
{
    int n = 0, p = 0, q = 1;

    cin >> n >> p;
    
    q = 1;
    
    while (q <= p)
    {
        cout << q << " ";
        q = q * n;
    }

    cout << '\n';
    return 0;
}
