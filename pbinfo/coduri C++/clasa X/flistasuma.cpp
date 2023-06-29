// #1175 - FListaSuma
#include <iostream>

using namespace std;

struct nod {
    int info;
    nod * urm;
};

// SOLUTIA PBINFO INCEPE AICI

int suma(nod * p)
{
    // suma elementelor impare
    // intre doua elemente pare

    int sum = 0;
    nod *iter = p;

    while (iter && iter->urm && iter->urm->urm)
    {
        int val1 = iter->info;
        int val2 = iter->urm->info;
        int val3 = iter->urm->urm->info;

        if (val1 % 2 == 0 && val2 % 2 != 0 && val3 % 2 == 0)
            sum += val2;

        iter = iter->urm;
    }
    return sum;
}

// SOLUTIA PBINFO SE TERMINA AICI

void insert_to_tail(nod *&head, int x)
{
    nod *nou_nod = new nod;
    nou_nod->info = x;
    nou_nod->urm = NULL;

    if (!head)
    {
        // lista vida
        head = nou_nod;
        return;
    }

    nod *iter = head;
    while (iter->urm)
        iter = iter->urm;
    iter->urm = nou_nod;
}

void print_list(nod *head)
{
    cout << "[";

    for (nod *iter = head; iter != NULL; iter = iter->urm)
    {
        cout << iter->info;
        if (iter->urm)
            cout << " -> ";
    }

    cout << "]\n";
}

int main()
{
    int n = 0, x = 0, sum = 0;
    nod *head = NULL;

    cout << "Numarul de elemente = ";
    cin >> n;

    cout << "Elementele listei : ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        insert_to_tail(head, x);
    }

    cout << "Initial : ";
    print_list(head);

    cout << "Suma elementelor pare situate intre doua elemente impare = ";
    cout << suma(head) << '\n';
    return 0;
}
