// #1270 - b16
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[10000];
    long long x = 0;

    cin.getline(s, 10000);

    for (int i = 0; i < strlen(s); i++)
    {
        if (isdigit(s[i]))
            x = x * 16 + s[i] - '0';
        else
            x = x * 16 + s[i] - 'A' + 10;
    }
    
    cout << x << '\n';
    return 0;
}
