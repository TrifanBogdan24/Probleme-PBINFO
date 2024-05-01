// #84 - InterschimbareLitere
#include <iostream>
#include <cstring>

using namespace std;

int poz_first_vowel(char s[15])
{
    // subprogramul intoarce indexul la care se afla prima vocala
    // sau -1 daca sirul nu contine nicio vocala

    char voc[] = "aeiouAEIOU";
    for (int i = 0; i < strlen(s); i++)
        if (strchr(voc, s[i]))
            return i;

    return -1;      // sirul nu contine nicio vocala
}

int poz_last_cons(char s[15])
{
    // subprogramul intoarce indexul la care se afla ultima consoana
    // sau -1 daca sirul nu contine nicio consoana

    char voc[] = "aeiouAEIOU";
    for (int i = strlen(s) - 1; i >= 0; i--)
        if (!strchr(voc, s[i]))
            return i;

    return -1;      // sirul nu contine nicio consoana
}

int main()
{
    char cuv[15];
    cin.getline(cuv, 15);
   
    int poz1 = poz_first_vowel(cuv);
    int poz2 = poz_last_cons(cuv);

    if (poz1 < 0 || poz2 < 0)
        cout << "IMPOSIBIL";
    else
    {
        char aux = cuv[poz1];
        cuv[poz1] = cuv[poz2];
        cuv[poz2] = aux;
        cout << cuv;
    }
    
    cout << '\n';
    return 0;
}
