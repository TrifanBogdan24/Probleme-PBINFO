// #122 - CifreBinare
#include <iostream>

using namespace std;
long long  a,b;

int Baza2(long long x)
{
    if (!x)
     return 0;
    
    if (x % 2)
     return (1 + Baza2(x / 2));
    
    return Baza2(x / 2);
}

int main()
{
    cin >> a >> b;

    if (Baza2(a) > Baza2(b))
cout << a;
    else
        cout<<b;

    return 0;
}
