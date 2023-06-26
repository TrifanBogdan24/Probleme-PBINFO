// #482 - Auto
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n = 0, t = 0, v = 0, D = 0, T = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t >> v;
        T += t;
        D += t * v;
    }
    cout << D << " " << setprecision(2 )<< fixed << float(D) / float(T);
    return 0;
}
