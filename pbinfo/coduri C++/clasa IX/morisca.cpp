// #1630 - Morisca
#include <iostream>
using namespace std;

int n;

int main()
{
    cin >> n;

    // cele doua triunghiuri de sus :  \_/
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) cout << '*';
        for (int j = i + 1; j <= n * 3 - i; j++) cout << ' ';
        for (int j = n * 3 - i + 1; j <= n * 3; j++) cout << '*';
        cout << '\n';
    }

    // dreptunghiul din centru
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) cout << ' ';
        for (int j = 1; j <= n; j++) cout << '*';
        for (int j = 1; j <= n; j++) cout << ' ';
        cout << '\n';
    }

    // cele doua triunghiuri de jos
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++) cout << '*';
        for (int j = i + 1; j <= n * 3 - i; j++) cout << ' ';
        for (int j = n * 3 - i + 1; j <= n * 3; j++) cout << '*';
        cout << '\n';
    }

    return 0;
}
