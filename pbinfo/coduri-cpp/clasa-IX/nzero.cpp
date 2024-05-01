// #1565 - nZero
#include <iostream>

using namespace std;

int main()
{
    int n = 0, a = 0, p = 0;
    cin >> n >> a;
    
    p = n;
    for (int i = 1; i <= a; i++)
        p = p * 10;
    
    cout << p << '\n';
    return 0;
}
