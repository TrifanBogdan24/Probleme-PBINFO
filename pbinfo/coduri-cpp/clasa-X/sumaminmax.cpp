// #2340 - sumaMinMax
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int *sumaMinMax(int v[100], int n)
{
    int sum = v[0];
    int min_val = v[0];
    int max_val = v[0];

    for (int i = 1; i < n; i++)
    {
        sum += v[i];
        
        if (v[i] < min_val)
            min_val = v[i];

        if (v[i] > max_val)
            max_val = v[i];
    }

    static int S[2];
    S[0] = sum - max_val;
    S[1] = sum - min_val; 
    return S;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, v[100];
    for (int i = 0; i < 100; i++)
        v[i] = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int *sum = sumaMinMax(v, n);
    cout << "cea mai mica suma din (n -1) elemente = " << sum[0] << '\n';
    cout << "cea mai mare suma din (n -1) elemente = " << sum[1] << '\n';

    return 0; 
}
