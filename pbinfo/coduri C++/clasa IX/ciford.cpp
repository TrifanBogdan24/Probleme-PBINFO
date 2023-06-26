// #448 - ciford
#include <iostream>

using namespace std;
int a, q1, q2, q3;

int main()
{
    cin >> a;
    q1 = a % 10;
    q2 = a / 100;
    q3 = a /10 % 10;
    
    if (q1 > q2) swap(q1, q2);
    if (q1 > q3) swap(q1, q3);
    if (q2 > q3) swap(q2, q3);
    
    cout << q1 << " " << q2 << " " << q3;
    return 0;
}
