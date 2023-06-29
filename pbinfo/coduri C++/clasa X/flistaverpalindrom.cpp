// #1256 - ListaVerPalindrom
#include <iostream>
#include <cstring>

using namespace std;

struct node {
    char key;
    node *next;
};
// SOLUTIA PBINFO INCEPE AICI

void insert_before_head(node *&head, char x)
{
    node *nou_nod = new node;
    nou_nod->key = x;
    nou_nod->next = NULL;

    if (!head)
    {
        // lista este vida
        head = nou_nod;
        return;
    }

    nou_nod->next = head;
    head = nou_nod;
}

bool palindrom(node *l)
{
    if (l == NULL)
        return false;

    node *invers_list = NULL;
    for (node *iter = l; iter != NULL; iter = iter->next)
        insert_before_head(invers_list, iter->key);

    node *iter1 = l;
    node *iter2 = invers_list;

    while (iter1 && iter2)
    {
        if (iter1->key != iter2->key)
            return false;

        iter1 = iter1->next;
        iter2 = iter2->next;
    }

    return true;
}

// SOLUTIA PBINFO SE TERMINA AICI

void add_tail_node(node *&p, char x)
{
    node *nod_nou = new node;
    nod_nou->key = x;
    nod_nou->next = NULL;

    if (!p)
    {
        // lista este vida
        p = nod_nou;
        return;
    }

    node *iter = p;
    while (iter->next)
        iter = iter->next;
    iter->next = nod_nou;
}

void print_list(node *p)
{
    cout << "[";

    for (node *iter = p; iter != NULL; iter = iter->next)
    {
        cout << iter->key;
        if (iter->next)
            cout << " -> ";
    }

    cout << "]\n";
}

int main()
{
    char c, s[1005];

    node *head = NULL;
    
    cin.getline(s, 10005);

    for (int i = 0; i < strlen(s); i++)
        add_tail_node(head, s[i]);

    cout << "Initial : ";
    print_list(head);
    
    if (palindrom(head))
        cout << "Lista este palindrom";
    else
        cout << "Lista nu este palindrom";

    cout << "\n";
    return 0;
}
