// #1411 - Numere13
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, nr_pairs = 0;
    
    cin >> a >> b;

    while (a && b)
    {
        while (a) a /= 10;
        while (b) b /= 10;
        if (a == b) nr_pairs++;

        cin >> a >> b;
    }
    
    cout << nr_pairs;
    return 0;
}
