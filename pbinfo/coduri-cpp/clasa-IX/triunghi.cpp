// #179 - triunghi
#include <iostream>

using namespace std;

int main ()
{
    double a = 0, b = 0, c = 0;
    int ok = 1;

    cin >> a >> b >> c;
    
    if (!a || !b || !c) ok = 0;     // if (!a) <=> if (a == 0) 
    else if (a + b <= c) ok = 0;
    else if (a + c <= b) ok = 0;
    else if (b + c <= a) ok = 0;

    if (ok) cout << "da";
    else cout << "nu";
 
    return 0;
}
