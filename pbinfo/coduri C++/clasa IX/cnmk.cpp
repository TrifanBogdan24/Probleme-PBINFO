// #3620 - cnmk
#include <iostream>
using namespace std;
long long n;
int k;

bool good()
{
    while (n)
    {
        if (n % 10 > k)return 0;
        n /= 10;
    }
    return 1;
}

int main()
{
    cin >> n >> k;
    if (good() == 1) cout << "DA";
    else cout << "NU";
    return 0;
}
