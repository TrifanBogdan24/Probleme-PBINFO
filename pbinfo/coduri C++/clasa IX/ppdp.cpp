// #3663 - ppdp
#include <iostream>

using namespace std;
long long n;

long long patrat_perfect(long long n)
{
    for (long long div = 2; div * div <= n; div++)
        if (n % div == 0) return (div * div);

    return -1;
}

int main()
{
    cin >> n;
    cout << patrat_perfect(n);
    return 0;
}
