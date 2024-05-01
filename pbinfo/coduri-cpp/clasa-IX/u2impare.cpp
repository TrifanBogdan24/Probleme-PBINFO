// #252 - U2Impare
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    if (n % 2 == 0)
        n--;
    
    cout << (n - 2) << " " << n << '\n';
    return 0;
}
