// #2604 - schimbarecifre
#include <iostream>

using namespace std;

int a, p, u;

int main()
{
    cin >> a;
    p = a / 10;
    u = a % 10;
    a = u * 10 + p;
    a = a * a;
    cout << a;
    return  0;
}
