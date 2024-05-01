// #509 - VerificareOrdonat
#include <iostream>

using namespace std;

bool is_sorted_asc(int n, int v[505])
{
    // functia (subprogramul) intoarce TRUE daca toate elementele vectorului
    // sunt ordonate crescator, si FALSE altfel

    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] > v[j])
                return 0;

    return 1;
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, v[505];

    for (int i = 0; i < 505; i++)
        v[i] = 0;
    
    // citirea vectorului
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    
    if (is_sorted_asc(n, v))
        cout << "DA\n";
    else
        cout << "NU\n";
    
    return 0;
}
