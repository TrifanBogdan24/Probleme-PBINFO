// #1654 - NrVocRec
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA TREBUIE SA FIE MUSAI RECURSIVA

#include <cstring>

int nr_vocale(char *s)
{
    if (strlen(s) == 0)
        return 0;
    else
    {
        return (strchr("aeiouAEIOU", s[0]) != NULL) + nr_vocale(s + 1);
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    char s[10005];
    cin.getline(s, 10005);
    cout << nr_vocale(s) << " vocale\n";
    return 0;
}
