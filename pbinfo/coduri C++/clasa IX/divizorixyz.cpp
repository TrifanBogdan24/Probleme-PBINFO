// #2372 - DivizoriXYZ
#include <iostream>
using namespace std;
long long n;

int main()
{
    cin >> n;
    if (n % 6)
        cout << "nu exista";
    else 
        cout << n / 6 << ' ' << n / 3 << ' ' << n / 2;
}
