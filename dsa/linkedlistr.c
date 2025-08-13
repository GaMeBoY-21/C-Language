#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int num;
    struct node*next;
}node;

int main(){
    node*head = NULL;
    for(int i = 0;i<4;i++){
        node*n = malloc(sizeof(node));
        scanf("%d",&n->num);
        n->next = head;
        head = n;
    }
    printf("enter postion:");
    int pos,new;
    scanf("%d",&pos);
    printf("enter Number:");
    scanf("%d",&new);
    node*ptr = head;
    for(int i = 0;i<=pos;i++){
        node*n = malloc(sizeof(node));
        if(i == (pos-2)){
            n->num = new;
            n->next = ptr->next;
            ptr->next = n;
            break;
        }
        ptr = ptr->next;
    }
    while(head!=NULL){
        printf("%d ",head->num);
        head = head->next;
    }
}