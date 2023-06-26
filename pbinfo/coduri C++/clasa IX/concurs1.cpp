// #3185 - Concurs1
#include <iostream>

using namespace std;

int a, b, n;

int main()
{
    cin >> a >> b >> n;
    
    if (n <= b && n >= a) cout << "DA";
    else cout << "NU";
    
    return 0;
}
