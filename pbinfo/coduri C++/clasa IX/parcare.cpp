// #1470 - Parcare
#include <iostream>
#include <fstream>
using namespace std;
fstream f("parcare.in");
ofstream g("parcare.out");
int data[2][4], t, p, diferenta_de_timp;

int interval_to_seconds(int data_one[4], int data_two[4])
{
    int z1 = data_one[0];
    int z2 = data_two[0];
    int l1 = data_one[1];
    int l2 = data_two[1];
    int h1 = data_one[2];
    int h2 = data_two[2];
    int m1 = data_one[3];
    int m2 = data_two[3];

    if (l1 == l2) 
        return ((z2 - z1) * 24 * 60 + (h2 - h1) * 60 + m2 - m1);

    if (l1 == 1 || l1 == 3 || l1 == 5 || l1 == 7 || l1 == 8 || l1 == 10 || l2 == 12) // ptr lunile cu 31
        return ((31 - z1 + z2) * 24 * 60 + (h2 - h1) * 60 + m2 - m1);   // ptr lunile cu 31
    
    if (l1 == 4 || l1 == 6 || l1 == 9 || l1 == 11) // ptr lunile cu 30
        return ((30 - z1 + z2) * 24 * 60 + (h2 - h1) * 60 + m2 - m1);  // ptr lunile cu 30
    
    if (l1 == 2) // ptr luuna februarie
        return ((28 - z1 + z2) * 24 * 60 + (h2 - h1) * 60 + m2 - m1);   // ptr luuna februarie

    return 0;
}

int main()
{
    f >> data[0][0] >> data[0][1] >> data[0][2] >> data[0][3];  // ziua, luna, ora, minutul
    f >> data[1][0] >> data[1][1] >> data[1][2] >> data[1][3];  // ziua, luna, ora, minutul
    diferenta_de_timp = interval_to_seconds(data[0], data[1]);
    f >> t;
    f >> p;
    if (p == 1) g << diferenta_de_timp;
    else 
    {
        if (diferenta_de_timp <= 15) g << '0';
        else if (data[0][3] == data[1][3]) g << diferenta_de_timp / 60 * t;
        else g << (diferenta_de_timp / 60 + 1) * t;
    }

    f.close();
    g.close();
    return 0;
}
