// #95 - PerechiVocale
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char buffer[260], voc[] = "aeiouAEIOU", *p;
    int nr = 0;

    cin.getline(buffer, 260);
    
    for (int i = 0; i < strlen(buffer) - 1; i++)
    {
        if (strchr(voc, buffer[i]) && strchr(voc, buffer[i + 1]))
            nr++;
    }
    
    cout << nr << '\n';
    return 0;
}
