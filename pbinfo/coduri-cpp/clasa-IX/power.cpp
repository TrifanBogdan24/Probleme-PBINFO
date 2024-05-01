// #1681 - Power
#include <iostream>

using namespace std;

int main()
{
    int P = 1, a = 0, b = 0;
    cin >> a >> b;
    
    P = 1;
    for (int i = 1; i <= b; i++)
        P *= a;
    cout << P << '\n';
    
    return 0;
}
