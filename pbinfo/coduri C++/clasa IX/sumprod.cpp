// #793 - SumProd
#include <iostream>

using namespace std;

int q1, q2, q3, a, b, c;

int main()
{
    cin >> a >> b >> c;
    q1 = a * b + c;
    q2 = a * c + b;
    q3 = b * c + a;
    
    if (q2 <= q1 && q3 <= q1) cout << q1;
    else if (q1 <= q2 && q3 <= q2) cout << q2;
    else if (q1 <= q3 && q2 <= q3) cout << q3;
    
    return 0;
}
