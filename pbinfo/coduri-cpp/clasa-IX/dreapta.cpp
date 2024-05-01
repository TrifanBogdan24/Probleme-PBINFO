// #334 - Dreapta

#include <iostream>

using namespace std;

int main()
{
    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;

    cin >> x1 >> y1;    // citim coordonatele primului punct
    cin >> x2 >> y2;    // citim coordonatele celui de al doilea punct

    if (x1 == x2) cout << "verticala";
    else if (y1 == y2) cout << "orizontala";
    else cout << "oblica";
    
    return 0;
}
