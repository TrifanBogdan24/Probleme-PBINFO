// #1273 - uciv
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0;

    cin >> a >> b;
    
    int s = a + b;
    int q = s % 10;
    
    cout << q << '\n';
    return 0;
}
