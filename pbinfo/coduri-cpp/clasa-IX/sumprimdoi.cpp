// #1567 - SumPrimDoi
#include <iostream>

using namespace std;

int main()
{
    int n = 0, sum = 0;

    do {
        cin >> n;
        
        if (n > 9)
        {
            while (n > 99)
                n = n / 10;
            sum = sum + n;
        }
    } while (n);
    
    cout << sum;
    return 0;
}
