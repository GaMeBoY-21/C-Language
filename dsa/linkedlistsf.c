#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct node {
    int number;
    struct node*next;
}node;

int main() {
    node *list = NULL;
    for(int i = 1;i<=3;i++){
        node*n = malloc(sizeof(node));
        if(n == NULL){
            return 1;
        }
        scanf("%d",&n->number);
        n->next = NULL;
        if(list == NULL){
            list = n;
        }
        else if( n->number < list->number){
            n->next = list;
            list = n;
        }
        else{
            for(node*ptr = list;ptr!=NULL;ptr = ptr->next){
                if(ptr->next == NULL){
                    ptr->next = n;
                    break;
                }

                if(n->number < ptr->next->number){
                    n->next = ptr->next;
                    ptr->next = n;
                    break;
                }
            }
        }
    }
    for(node*ptr = list;ptr!=NULL;ptr = ptr->next){
        printf("%d ",ptr->number);
    }
    return 0;
}