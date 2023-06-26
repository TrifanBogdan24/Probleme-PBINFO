// #1613 - numere15
#include <iostream>

using namespace std;

int invers(int x)
{
    int inv = 0;
    
    while (x)
    {
        inv = inv * 10 + x % 10;
        x /= 10;
    }

    return inv;
}

int main()
{
    int n = 0;
    
    cin >> n;
    
    int n1 = 0;
    int n2 = 0;
    int inv = invers(n);
    
    while (inv)
    {
        if (inv % 2 == 0)
            n1 = n1 * 10 + inv % 10;
        else
            n2 = n2 * 10 + inv % 10;
        
        inv = inv / 10;
    }
    
    if (n1 >= n2)
        cout << n1 - n2;
    else
        cout << n2 - n1;
    
    cout << '\n';
    return 0;
}
