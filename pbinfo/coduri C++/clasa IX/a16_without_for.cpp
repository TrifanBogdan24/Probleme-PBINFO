//#2599 - a16
#include <iostream>

using namespace std;

long long  p = 1, a;

int main()
{
    cin >> a;

    a = a * a;      // a * a = a ^ 2
    a = a * a;      // (a ^ 2) ^ 2 = a ^ 4
    a = a * a;      // (a ^ 4) ^ 2 = a ^ 8
    a = a * a;      // (a ^ 8) ^ 2 = a ^ 16

    cout << p;
    return 0;
}
