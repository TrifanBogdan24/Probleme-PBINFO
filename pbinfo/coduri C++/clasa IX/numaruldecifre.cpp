// #66 - NumarulDeCifre
#include <iostream>
using namespace std;
long long n;
int q;

int main()
{
    cin >> n;
    if (!n) cout << '1';
    else
    {
        q=0;
        while (n)
        {
            n /= 10;
            q++;
        }
        cout << q;
    }
    return 0;
}
