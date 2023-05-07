// #2600 - expatr
#include <iostream>
#include <cmath>
using namespace std;
int a, b;
double x;

int main()
{
    cin >> a;
    b = a * a * (1 + a * a);
    x = b + sqrt(b);
    x = 3 * b / x + sqrt(b);
    cout << int(x);
    return 0;
}
