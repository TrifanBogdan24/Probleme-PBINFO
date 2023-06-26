// #362 - sumcif1
#include <iostream>
using namespace std;

int main()
{
    int n = 0, sum = 0, p = 1;
    
    cin >> n;
    
    do {
        if (!p)
            sum = sum + n % 10;

        n = n / 10;
        p = 1 - p;
    } while (n);

    cout << sum;
    return 0;
}
