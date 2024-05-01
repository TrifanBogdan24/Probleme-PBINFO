// #1892 - Snorocos
#include <iostream>

using namespace std;
int main()
{
    int n = 0, k = 0;
    cin >> n;
    if (n % 2 == 0) cout << "NU ESTE NOROCOS";
    else {
        k = (n + 1) / 2;
        while (n)
        {
            cout << k << " ";
            k++;
            n--;
        }
    }
    return 0;
}
