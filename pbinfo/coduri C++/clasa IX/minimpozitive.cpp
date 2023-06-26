// #55 - MinimPozitive
#include <iostream>

using namespace std;

int main()
{
    int a = 0, MIN = -1;

    do {
        cin >> a;
        
        if (MIN  == -1 && a > 0)
            MIN = a;

        if (a < MIN && a > 0)
            MIN = a;

    } while(a);

    if (MIN != -1)
        cout << MIN;
    else
        cout << "NU EXISTA";

    return 0;
}
