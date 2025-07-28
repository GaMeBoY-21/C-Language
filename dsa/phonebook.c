#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct node {
    char name[20];
    int number;
    struct node *next;
}node;

int main() {
    node *list = NULL;
    for(int i = 1;i<=3;i++){
        node *n = malloc (sizeof(node));
        if(n == NULL){
            return 1;
        }
        scanf("%s",&n->name);
        scanf("%d",&n->number);
        n->next = NULL;
        if(list == NULL){
            list = n;
        }
        else {
            for(node*ptr = list;ptr!=NULL;ptr = ptr->next){
            if(ptr->next == NULL){
                ptr->next = n;
                break;
            }
        }
    }
    }
    char que[20];
    scanf("%s",que);
    for(node*ptr = list;ptr!=NULL;ptr = ptr->next){
        if(strcmp(ptr->name,que)==0){
            printf("%s number is %d",ptr->name,ptr->number);
        }
    }
    return 0;
}