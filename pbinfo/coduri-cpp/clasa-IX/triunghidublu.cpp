// #1564 - TriunghiDublu
#include <iostream>

using namespace std;

int n = 0;

int main()
{
    cin >> n;

    for (int i = 1; i <= n * 2; i++)
    {
        if (i<=n)
        {
            for (int j = 1; j <= i; j++) cout << '*';
            for (int j = i + 1; j <= n * 2; j++) cout << ' ';
        } else {
            for (int j = 1; j < i; j++) cout << ' ';
            for (int j = i; j <= n * 2; j++) cout << '*';
        }
        cout << '\n';
    }

    return 0;
}