// #1539 - apartenenta
#include <iostream>


// SOLUTIA PBINFO INCEPE AICI

bool apartenenta(long long n)
{
    while (n % 2 == 0)
        n = n / 2;
    
    while (n % 3 == 0)
        n = n / 3;
    
    while (n % 5 == 0)
        n = n / 5;

    return (n == 1);
}

// SOLUTIA PBINFO SE TERMINA AICI


using namespace std;

int main()
{
    int n = 0;
    cout << "n = ";
    cin >> n;

    cout << apartenenta(n) << '\n';
    return 0;
}
