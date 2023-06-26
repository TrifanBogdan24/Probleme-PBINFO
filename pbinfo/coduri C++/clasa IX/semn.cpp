// #167 - Semn
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    
    if (n > 0) cout << "pozitiv";
    else if (n < 0) cout << "negativ";
    else cout << "nul";

    cout << '\n';
    return 0;
}
