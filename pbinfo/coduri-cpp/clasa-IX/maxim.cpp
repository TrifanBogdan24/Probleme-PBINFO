// #54 - Maxim
#include <iostream>

using namespace std;

int main()
{
    int a = 0, MAX = 0;

    do {
        cin >> a;
        
        if (MAX  == 0 && a > 0)
            MAX = a;

        if (a > MAX && a > 0)
            MAX = a;

    } while(a);

    if (MAX)
        cout << MAX;
    else
        cout << "NU EXISTA";

    cout << '\n';
    return 0;
}
