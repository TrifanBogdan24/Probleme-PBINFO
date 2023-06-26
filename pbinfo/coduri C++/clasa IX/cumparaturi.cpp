// #3210 - Cumparaturi
#include <iostream>

using namespace std;

int B,S;

int main()
{
    cin >> B >> S;
    cout << (S / B) << " " << (B - S % B);
    return 0;
}
