// #2781 - Wildfire

// se face cu distanta Manhattan

#include <iostream>

using namespace std;

long long n, m, x_start, y_start, Max = -1,m1,m2;

int main()
{
    cin >> x_start >> y_start >> n >> m;

    m1 = x_start;
    m2 = y_start;
    if (m1 + m2 > Max)
        Max = m1 + m2;

    m1 = n - x_start + 1;
    m2 = y_start;
    if (m1 + m2 > Max)
        Max = m1 + m2;

    m1 = x_start;
    m2 = m - y_start + 1;
    if(m1+m2>Max)
        Max = m1 + m2;

    m1 = n - x_start + 1;
    m2 = m - y_start + 1;
    if (m1 + m2 > Max)
        Max = m1 + m2;

    cout << (Max - 1);
    return 0;
}

