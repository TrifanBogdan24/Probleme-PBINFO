// #453 - distincte1
#include <iostream>
#include <cmath>
using namespace std;
long long a, b, c;

int main ()
{
    cin >> a >> b >> c;
    if (a != b && a != c && b != c) cout << '3';
    else if (a == b && b == c) cout<< '1';
    else cout << '2';
    return 0;
}
