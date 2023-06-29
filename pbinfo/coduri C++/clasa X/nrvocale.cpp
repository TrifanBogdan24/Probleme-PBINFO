// #890 - NrVocale
#include <iostream>
#include <cstring>

using namespace std;

char sir[256], voc[6] = "aeiou", rasp;
int frecv_voc[6] = {0}, idx;

int main()
{
    for (int i = 0; i < 6; i++)
        frecv_voc[i] = 0;

    cin.getline(sir, 256);

    for (unsigned int i = 0; i < strlen(sir); i++)
    {
        sir[i] = tolower(sir[i]);
        
        if (strchr(voc, sir[i]))
            frecv_voc[strchr(voc, sir[i]) - voc]++;
    }

    idx = 0;
    for (int i = 0; i < 6; i++)
        if (frecv_voc[i] > frecv_voc[idx])
            idx = i;

    rasp = toupper(voc[idx]);
    cout << rasp << '\n';

    return 0;
}
