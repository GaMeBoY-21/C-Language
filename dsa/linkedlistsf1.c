#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node *next;
} node;

int main() {
    node *list = NULL;

    for (int i = 1; i <= 5; i++) {
        node *n = malloc(sizeof(node));
        if (n == NULL) {
            return 1;
        }
        scanf("%d", &n->number);
        n->next = NULL;

        // Insert at beginning or into empty list
        if (list == NULL) {
            list = n;
        }
        else if(n->number < list->number){
            n->next = list;
            list = n;
            }else {
            // Insert at correct sorted position
            node *ptr = list;
            while (ptr->next != NULL && ptr->next->number < n->number) {
                ptr = ptr->next;
            }
            n->next = ptr->next;
            ptr->next = n;
        }
    }

    // Print sorted list
    for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
        printf("%d ", ptr->number);
    }

    return 0;
}
