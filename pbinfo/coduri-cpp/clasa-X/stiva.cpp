// #875 - Stiva
#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

stack<long long> s;

char a[15], *p;
int n, i, x, nr = 0;
long long v[1009];

long long val(int p)
{
    long long x = 0;
    while (isdigit(a[p]))
    {
        x = x * 10 + a[p] - '0';
        p++;
    }
    return x;
}

int main()
{
    cin >> n;
    cin.get();
    
    for (int i = 1; i <= n; i++)
    {
        cin.getline(a, 15); // cout<<" "<<a<<"     "<<a[0]<<'\n';
        
        if (a[0] == 't' && a[1] == 'o' && a[2] == 'p')
        {
            if (!s.empty())
                cout << s.top() << '\n';
        }
        else if (a[0] == 'p' && a[1] == 'o' && a[2] == 'p')
            s.pop();
        else
        {
            if (a[5] == '-')
                x = -val(6);
            else
                x = val(5);

            s.push(x);
        }
    }

    return 0;
}