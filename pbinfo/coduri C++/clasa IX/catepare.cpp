// #1261 - CatePare
#include <iostream>
using namespace std;
int main()
{
    int K = 0;
    long long a = 0;
   
    while (cin >> a && a != 0)
    {
        if (a % 2 == 0)
            K = K + 1;
    }

    if (K != 0)
        cout << K;
    else
        cout << "NU EXISTA";

    return 0;
}
