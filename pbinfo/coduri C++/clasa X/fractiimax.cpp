// #923 - FractiiMax
#include <iostream>

using namespace std;

int a, b, c, d, x;
float x1, x2;

int main()
{
    cin >> a >> b >> c >> d;
    x1 = a / b;
    x2 = c / d;
    
    if (x2 > x1)
    {
        swap(a, c);
        swap(b, d);
    }
    
    if (a > b)
        x = b;
    else
        x = a;
    
    for (int i = 2; i <= x; i++)
    {
        while (a % i == 0 && b % i == 0)
        {
            a = a / i;
            b = b / i;
        }
    }
    
    cout << a << " " << b << '\n';
    return 0;
}
