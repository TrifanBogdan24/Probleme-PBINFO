// #2200 - Uppercase
#include <iostream>
#include <cctype>

using namespace std;

char litera;

int main()
{
    cin >> litera;
    litera = toupper(litera);
    cout << litera;
    return 0;
}
