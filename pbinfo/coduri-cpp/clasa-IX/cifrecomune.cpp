// #1308 - CifreComune
#include <iostream>
using namespace std;

int a, b, a1, a2, b1, b2;

int main()
{
    cin >> a >> b;
    a1 = a / 10; 
    a2 = a % 10;
    b1 = b / 10;
    b2 = b % 10;
    
    if (a1 == b1 || a2 == b2) cout << "da";
    else if (a1 == b2 || a2 == b1) cout << "da";
    else cout << "nu";

    return  0;
}
