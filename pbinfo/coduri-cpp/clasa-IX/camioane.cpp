// #226 - Camioane
#include <iostream>

using namespace std;

int main()
{
    int t1, t2, n, m, z, p1, p2, s;
    t1 = t2 = n = m = z = p1 = p2 = s = 0;

    cin >> t1 >> t2 >> n >> m >> z;
    
    p1 = n * t1 * z;
    p2 = m * t2 * z;
    s = p2 + p1;
    
    cout << s << '\n';
    return 0;
}
