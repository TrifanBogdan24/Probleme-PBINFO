// #90 - NumarMaximVocale
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("vocmax.in");
ofstream g("vocmax.out");

int n, nr_voc, Max_voc;
char s[250], prop[250], voc[20] = "aeiouAEIOU";

int main()
{
    f >> n;
    f.get();
    for (unsigned int i = 1; i <= n; i++)
    {
        f.getline(s, 250);
        nr_voc = 0;
        for (unsigned int j = 0; j < strlen(s); j++)
            if (strchr(voc, s[j]) != 0)
                nr_voc++;

        if (nr_voc > Max_voc)
        {
            strcpy(prop, s);
            Max_voc = nr_voc;
        }
    }

    g << prop;
    
    g << '\n';
    f.close();
    g.close();
    return 0;
}
