// #2200 - Uppercase
#include <iostream>

using namespace std;

char litera;

int main()
{
    cin >> litera;
    litera = litera + 'A' - 'a';
    cout << litera;
    return 0;
}
