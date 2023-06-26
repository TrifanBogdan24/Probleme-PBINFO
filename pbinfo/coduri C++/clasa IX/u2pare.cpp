// #253 - U2Pare
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    
    if (n % 2 == 0)
        cout << n + 2 << " " << n + 4;
    else
        cout << n + 1 << " " << n + 3;

    cout << '\n';
    return 0;
}
