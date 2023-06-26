// #2700 - RadixSort
// solution under construction

#include <iostream>
#include <fstream>
#include <queue>
#include <vector>

using namespace std;

ifstream f("radixsort.in");
ofstream g("radixsort.out");

queue<long long> cifre[11];
vector<long long> vect;

int main()
{
    int n = 0;
    long long x = 0;
    
    f >> n;
    long long max_el = -1;
    for (int i = 0; i < n; i++)
    {
        f >> x;
        vect.push_back(x);
        if (x > max_el)
            max_el = x;
    }

    // cout << "Vectorul initial = "; display_queue(vect);

    long long p = 1;

    while (p < max_el)
    {
   	    for (vector<long long>::iterator it = vect.begin(); it != vect.end(); it++)
        {
            int cif = (*it / p) % 10;
            cifre[cif].push(*it);
        }

        vect.clear();
        int n = 0;
        for (int i = 0; i < 10; i++)
        {
            while(!cifre[i].empty())
            {
                x = cifre[i].front();
                vect.push_back(x);
                cifre[i].pop();
            }
        }

        p = p * 10;
    }
 
   	for (vector<long long>::iterator it = vect.begin(); it != vect.end(); it++)
        g << *it << ' ';
    
    g << "\n";

    f.close();
    g.close();
    return 0;
}