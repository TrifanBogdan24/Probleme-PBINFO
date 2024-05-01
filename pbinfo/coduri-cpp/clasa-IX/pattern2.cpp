// #2543 - pattern2
#include <iostream>
using namespace std;
int n;

int divide(int n)
{
    if (!n)
        return 0;
    else 
        return (n + 4 * divide(n - 1));
}
int main()
{
    cin >> n;
    cout << divide(n);
    return 0;
}
