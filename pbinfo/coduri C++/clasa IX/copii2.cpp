// #3178 - Copii2
#include <iostream>
using namespace std;
int nr_fete, nr_baiati, nr_zile;

int main()
{
    cin >> nr_fete >> nr_baiati >> nr_zile;
    cout << (nr_fete * 3 + nr_baiati * 2) * nr_zile;
    return 0;
}
