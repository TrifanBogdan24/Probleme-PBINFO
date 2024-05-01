// #102 - cifre
#include <iostream>

using namespace std;

int main()
{
    int n = 0, s = 0;
    
    cin >> n;
    s = n % 10 + n % 100 / 10;
    cout << s << '\n';
    
    return 0;
}
