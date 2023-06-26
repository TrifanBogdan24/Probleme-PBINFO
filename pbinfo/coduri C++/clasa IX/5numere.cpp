// #559 - 5numere
#include <iostream>

using namespace std;

int v[6];

int main()
{
    // citirea numerelor
    for (int i = 0; i <= 5; i++)
        cin >> v[i];

    // sortarea descrescatoare a numerelor
    for (int i = 1; i < 5; i++)
        for (int j = i +1 ; j<= 5; j++)
            if (v[i] < v[j])
                swap(v[i], v[j]);
    
    // v[1] > v[2] > v[3] > v[4] > v[5]
    cout << (v[1] + v[2] + v[3]);
    return  0;
}
