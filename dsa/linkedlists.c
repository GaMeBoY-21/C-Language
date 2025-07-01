// We get list in reverse, like 3 2 1
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node*next;
}node;

int main() {
    node *list = NULL;
    for(int i = 1;i<=3;i++){
        node *n = malloc(sizeof(node));
        n->number = i;
        n->next = list;
        list = n;
    }
    node*ptr = list;
    while(ptr!=NULL){
        printf("%d ",ptr->number);
        ptr = ptr->next;
    }
    return 0;
}