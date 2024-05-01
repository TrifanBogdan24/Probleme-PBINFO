// #3233 - AfisareNumereImpare1
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    
    if (n % 2 == 0)
        n--;

    for (int i = n; i >= 1; i = i - 2)
        cout << i << " ";

    return 0;
}
