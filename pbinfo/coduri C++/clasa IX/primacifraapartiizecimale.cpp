// #2603 - primacifraapartiizecimale 
#include <iostream>

using namespace std;

int a;
float q;

int main()
{
    cin >> q;
    q = q * 10;
    a = int(q);
    cout << (a % 10);
    return  0;
}
