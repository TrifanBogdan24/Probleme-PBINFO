// #2600 - produsprimeledouacifre
#include <iostream>

using namespace std;

long long n;

int main()
{
    cin >> n;
    while (n > 99) n /= 10;
    cout << (n % 10) * (n / 10);
    return 0;
}
