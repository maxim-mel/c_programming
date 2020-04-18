#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int value;
    struct list *nxt;
} list;

int exists = 0;

list *create (int value){
    exists = 1;
    list *i = (list*)malloc(sizeof(list));
    i->value = value;
    i->nxt = NULL;
    return i;
}

struct list * add(list *lst, int value){
    struct list *temp, *p;
    temp = (struct list*)malloc(sizeof(list));
    p = lst->nxt;
    lst->nxt = temp;
    temp->value = value;
    temp->nxt = p;
    return temp;
}

void delete_elem(list *lst){
    list *p;
    if (lst == NULL) return;
    for (p=lst; p->nxt->nxt; p=p->nxt) ;
    p->nxt = NULL;
}

void print_list(list *lst){
    struct list *p;
    p = lst;
    do {
        printf("%d ", p->value);
        p = p->nxt;
    } while (p != NULL);
}

void delete_list(list *lst){
    while (lst != NULL){
        list *p = lst;
        lst = lst->nxt;
        free(p);
    }
    exists = 0;
}

void search(list *lst, int value){
    while (lst != NULL){
        list *p = lst;
        lst = lst->nxt;
        if (value == p->value){
            printf("element is found");
            return;
        }
    }
    printf("was not found");
}

int main(){
    int action;
    int d;
    menu:
    printf("1 - create island\n");
    printf("2 - add element\n");
    printf("3 - delete element\n");
    printf("4 - display list\n");
    printf("5 - delete list\n");
    printf("6 - find element\n");
    printf("7 - exit\n");
    printf("Your choice: ");
    d = scanf("%d", &action);
    if ((d != 1) || (action < 1) || (action > 7)) {
        printf("Error: wrong input.");
        return 1;
    }
    switch (action){
    case 1: ;
        int n;
        printf("Enter the value of the first elem: ");
        scanf("%d", &n);
        struct list *i = create(n);
        break;
    case 2: {
        if (exists != 1){
            printf("List is not exists.");
            break;
        }
        int n;
        printf("Enter the value of elem: ");
        scanf("%d", &n);
        add(i, n);
        break;
    }
    case 3:
        if (exists != 1){
            printf("List is not exists.");
            break;
        }
        delete_elem(i);
        break;
    case 4:
        if (exists != 1){
            printf("List is not exists.");
            break;
        }
        print_list(i);
        break;
    case 5:
        if (exists != 1){
            printf("List is not exists.");
            break;
        }
        delete_list(i);
        break;
    case 6: {
        if (exists != 1){
            printf("List is not exists.");
            break;
        }
        int n;
        printf("Enter the value to find: ");
        scanf("%d", &n);
        search(i, n);
        break;
    }
    case 7:
        return 0;
    default:
        break;
    }
    printf("\n\n");
    goto menu;
    return 0;
}
