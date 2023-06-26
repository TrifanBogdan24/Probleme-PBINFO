// #1311 - CifEgale
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    
    if (n / 100 == n % 10 && n % 10 == n % 100 / 10)
        cout << "da";
    else
        cout << "nu";
    
    cout << '\n';
    return 0;
}
