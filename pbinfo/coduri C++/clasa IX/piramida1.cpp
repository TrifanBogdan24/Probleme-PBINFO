// #456 - Piramida1
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    char c = '\n';
    cin >> n >> c;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) cout << c;
        cout << '\n';
    }

    return 0;
}
