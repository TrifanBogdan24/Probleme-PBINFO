// #2680 - Poezie
#include <iostream>
#include <cstring>

using namespace std;

int n;
char a[257], sep[10] = ".,?!";

int main()
{
    cin >> n;
    cin.get();
    
    for (int i = 1; i <= n; i++)
    {
        cin.getline(a, 256);
    
        for (int j = 0; j < strlen(a); j++)
        {
            if (j == strlen(a) - 1)
                cout << a[j];
            else if ((strchr(sep, a[j])) == 0)
                cout << a[j];
        }

        cout << '\n';
    }

    return 0;
}
