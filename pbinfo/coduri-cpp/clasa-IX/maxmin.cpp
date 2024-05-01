// #9 - maxmin
#include <iostream>
using namespace std;

int nr1, nr2, nr3;

int main()
{

    cin >> nr1 >> nr2 >> nr3;

    if (nr1 > nr2)
        swap(nr1, nr2);

    if (nr1 > nr3)
        swap(nr1, nr3);

    if (nr2 > nr3)
        swap(nr2, nr3);

    // ordinea va deveni : nr1 < nr2 < nr3
    cout << nr3 - nr1;
    return  0;
}
