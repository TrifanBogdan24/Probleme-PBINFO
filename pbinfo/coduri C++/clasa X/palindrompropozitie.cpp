// #89 - PalindromPropozitie
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("palindrom.in");
ofstream g("palindrom.out");

bool palindrom(char s[255])
{
    int len = strlen(s);

    for (int i = 0; i < len / 2; i++)
        if (s[i] != s[len - 1 - i])
            return 0;

    return 1;
}

void remove_spaces(char input_s[255], char output_s[255])
{
    int l = 0;

    for (unsigned int i = 0; i < strlen(input_s); i++)
        if (input_s[i] != ' ')
            output_s[l++] = input_s[i];

    output_s[l] = '\0';
}

int main()
{
    int n = 0;
    char propozitie[255];
    char prop_no_spaces[255];

    f >> n;
    f.get();
    for (int i = 1; i <= n; i++)
    {
        f.getline(propozitie, 255);
        remove_spaces(propozitie, prop_no_spaces);
        g << palindrom(prop_no_spaces) << '\n';
    }

    f.close();
    g.close();
    return 0;
}
