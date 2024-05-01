// #391 - Fractii
#include <iostream>

using namespace std;
int n, P, Q, i, p, q, e;

int cmmdc(int a, int b)
{
    if (a == b) return a;
    else if (a > b) return cmmdc(a - b, b);
    return cmmdc(a, b - a);
}

int CMMDC(int a, int b)
{
    return (a * b / cmmdc(a,b));
}

int main()
{
    cin >> n >> P >> Q;

    for (i = 2; i <= n; i++)
    {
        cin >> p >> q;
        if (q == Q) P += p;
        else {
            e = CMMDC(Q, q);
            P = P * e / Q + p * e / q;
            Q = e;
        }

    }

    e = cmmdc(P, Q);
    cout << (P / e) << ' ' << (Q / e);
    return 0;
}
