// #922 - Puncte
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n = 0, x = 0, y = 0, nr = 0;
    float MAX_dist = -1.0, dist = 0;
    
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        dist = sqrt(x * x + y * y);
        
        if (dist > MAX_dist)
        {
            MAX_dist = dist;
            nr = 1;
        }
        else if (dist == MAX_dist)
            nr++;
    }
    
    cout << setprecision(3) << fixed << MAX_dist;
    cout << ' ' << nr << '\n';

    return 0;
}
