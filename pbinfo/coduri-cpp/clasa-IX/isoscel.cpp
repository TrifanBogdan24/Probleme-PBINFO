// #1301 - isoscel
#include <iostream>
using namespace std;
double x, y, z;
int ok = 1, ok1, ok2;

int main()
{
    cin >> x >> y >> z;
    if (x + y <= z)
        ok = 0;
    
    if (x + z <= y)
        ok = 0;
    
    if (y + z <= x)
        ok = 0;

    if (ok == 1)
    {
        if (x == y && y == z)
            cout << "Nu formeaza triunghi isoscel";
        else {
            if (x==y  || y==z || z == x)
                cout << "Formeaza triunghi isoscel";
            else
                cout << "Nu formeaza triunghi isoscel";
        }

    } else
        cout << "Nu formeaza triunghi";
    return 0;
}
