// #3154 - anagrame_pfv
#include <iostream>
#include <cstring>
using namespace std;

int n, v[15], st[15], fix[15], nr;
bool pus[15];
char s[15], voc[6] = "aeiou";

void afis()
{
    for (int i = 0; i < n; i++)
        cout << s[st[i]];
    cout << '\n';
}

void back(int k)
{
    if (k == n)
        afis();
    else
    {
        if (strchr(voc, s[k]) != NULL)
        {
            pus[k] = 1;
            st[k] = k;
            back(k + 1);
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (!pus[i])
                {
                    pus[i] = 1;
                    st[k] = i;
                    back(k + 1);
                    pus[i] = 0;
                }
            }
        }
    }
}

int main()
{
    cin.getline(s, 15);
    n = strlen(s);

    // for(i=1;i<=nr;i++)cout<<v[i]<<' ';
    for (int i = 0; i < n - 1; i++)
    {
        if (strchr(voc, s[i]) != NULL)
            v[++nr] = i + 1;
        else
        {
            for (int j = i + 1; j < n; j++)
            {
                if (strchr(voc, s[j]) == NULL)
                {
                    if (int(s[i]) > int(s[j]))
                        swap(s[i], s[j]);
                }
            }
        }
    }

    back(0);
    return 0;
}
