// #1358 - Minciuna
#include <iostream>
#include <cmath>
using namespace std;
int x, y;

int main()
{
    cin >> x >> y;
    if (x > y)
        swap(x, y);

    if (abs(x - y) > 1) cout << "minciuna";
    else if (x % 2 == 1) cout << "minciuna";
    else cout << "Andrei e mai responsabil";
    return 0;
}
