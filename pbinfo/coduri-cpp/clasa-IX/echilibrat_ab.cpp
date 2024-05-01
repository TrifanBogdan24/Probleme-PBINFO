// #3246 - echilibrat_ab
#include <iostream>
using namespace std;
int a, b, nr1, nr2, x, i;
long long S;

int main()
{
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    
    S = 0;
    for (i = a; i <= b; i++)
    {
        x = i;
        nr1 = 0;
        nr2 = 0;
        while (x)
        {
            if (x%2) nr1++;
            else nr2++;
            x /= 10;
        }
        if (nr1 == nr2) 
            S += i;
    }
    cout << S;
    return 0;
}
