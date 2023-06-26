// #332 - Expresie2
#include <iostream>

using namespace std;

int main()
{
    int n = 0, S = 0;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        S += (i + 1) * i;

    cout << "Rezultatul este " << S << '\n';
    return 0;
}
