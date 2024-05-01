// #109 - Paritate
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    
    cin >> n;
    if (n % 2 == 0)
        cout << n << " este par";
    else
        cout << n << " este impar";
    
    cout << '\n';
    return 0;
}
