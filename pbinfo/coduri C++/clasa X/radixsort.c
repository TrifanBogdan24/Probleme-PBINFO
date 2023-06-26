// #2700 - RadixSort
// solution under construction

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    long long val;
    struct Node *next;
} ListNode;

ListNode *createNode(long long val)
{
    ListNode *new_node = (ListNode *)malloc(sizeof(ListNode));
    new_node->val = val;
    new_node->next = NULL;
    return new_node;
}

void insert_list_tail(ListNode **list, long long val)
{
    ListNode *new_node = createNode(val);
    
    if (!(*list)) {
        (*list) = new_node;
        return;
    }

    ListNode *iter = (*list);
    while (iter->next)
        iter = iter->next;
    iter->next = new_node;
}

void delete_head(ListNode **list)
{
    if (!(*list))
        return;

    ListNode *aux = (*list);
    (*list) = (*list)->next;
    free(aux);
}

void empty_list(ListNode *list)
{
    while (list)
        delete_head(&list);
}

void display_list(ListNode *list)
{
    ListNode *iter = list;
    printf("[");
    while(iter) {
        printf("%lld", iter->val);
        if (iter->next)
            printf("->");
        iter = iter->next;
    }
    printf("]\n");
}

ListNode *radix_sorted_list(ListNode *vect)
{
    ListNode **lista_cifre = (ListNode **)malloc(10 * sizeof(ListNode *));
    ListNode *vect_sortat = createNode(0);

    ListNode *iter = vect;
    while (iter) {
        insert_list_tail(&vect_sortat, iter->val);
        iter = iter->next;
    }
    delete_head(&vect_sortat);   // stergem santinela

    int p = 1;
    int OK = 1;

    while (OK) {
        for (int i = 0; i < 10; i++) {
            empty_list(lista_cifre[i]);
            lista_cifre[i] = createNode(0);
        }

        int max_el = -1;
        ListNode *iter = vect_sortat;
        while (iter) {
            if (iter->val > max_el)
                max_el = iter->val;

            int cif = ((iter->val) / p) % 10;
            insert_list_tail(&lista_cifre[cif], iter->val);
            iter = iter->next;
        }

        empty_list(vect_sortat);
        vect_sortat = createNode(0);    // santinela

        for (int i = 0; i < 10; i++) {
            delete_head(&lista_cifre[i]);    // stergem santinela
            iter = lista_cifre[i];
            while (iter) {
                insert_list_tail(&vect_sortat, iter->val);
                iter = iter->next;
            }
        }

        delete_head(&vect_sortat);
        printf("New step sort : ");
        display_list(vect_sortat);
        
        p *= 10;
        if (p > max_el)
            OK = 0;
    }

    return vect_sortat;
}

int main()
{
    FILE *fin = fopen("radixsort.in", "rt");
    FILE *fout = fopen("radixsort.out", "wt");

    if (!fin || !fout) {
        printf("Eroare la deschiderea fisierului\n");
    }

    int n = 0;
    long long x = 0;
    // ListNode *vect = createNode(-1);    // santinela (vom elimina acest nod dupa citire)
    ListNode *vect = createNode(-1);
    fscanf(fin, "%d", &n);
    for (int i = 0; i < n; i++) {
        fscanf(fin, "%lld", &x);
        insert_list_tail(&vect, x);
    }
    
    delete_head(&vect);  // stergem santinela
    
    printf("Input vector : ");
    display_list(vect);
    
    printf("\n");
    ListNode *sorted_vect = radix_sorted_list(vect);

    printf("\nSorted vector : ");
    display_list(sorted_vect);

    fclose(fin);
    fclose(fout);
    return 0;
}