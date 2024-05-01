// #177 - bisect
#include <iostream>
using namespace std;

int main ()
{
    int n = 0;
    cin >> n;
    
    if (n % 4 == 0 && n % 100 != 0) cout << "bisect";
    else if (n % 400 == 0) cout << "bisect";
    else cout << "nebisect";
    
    return 0;
}
