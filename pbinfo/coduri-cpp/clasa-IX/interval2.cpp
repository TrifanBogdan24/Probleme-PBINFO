// #469 - Interval2
#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, x = 0;
    
    cin >> a >> b >> x;
    
    if (a <= x && b >= x)
        cout << "DA";
    else
        cout << "NU";
    
    cout << '\n';
    return 0;
}
