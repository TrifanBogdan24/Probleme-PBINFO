//#2599 - a16
#include <iostream>

using namespace std;

long long  p = 1, a;

int main()
{
    cin >> a;

    // de fapt <=> 4 iteratii a = a * a sunt suficiente
    for (int i = 1; i <= 16; i++)
        p = p * a;

    cout << p;
    return 0;
}
