// #1574 - Prietene
#include <iostream>

using namespace std;

int sum_div(int x)
{
    int suma = 0;
    for (int d = 1; d <= x; d++)
        if (x %d == 0)
            suma ++;
    return suma;
}
int main()
{
    int a = 0, b = 0;
    cin >> a >> b;

    if (sum_div(a) != b) cout << "NU SUNT PRIETENE";
    else if(a != sum_div(b)) cout << "NU SUNT PRIETENE";
    else cout << "PRIETENE";
    
    return 0;
}
