// #461 - Timp1
#include <iostream>

using namespace std;

int h1, h2, m1, m2, x, y;

int main()
{
    cin >> h1 >> m1 >> x >> y;
    h2 = h1 + x;
    m2 = m1 + y;
    
    if (m2 >= 60)
    { 
        m2 -= 60;
        h2++;
    }

    cout << (h2 % 24) << " " << m2;
    return  0;
}
