#include <iostream>

using namespace std;

int n, nr, patrat_nr;

int main()
{
    cin >> n;
    nr = n % 100;
    patrat_nr = nr * nr;
    cout << patrat_nr;
    return 0;
}
