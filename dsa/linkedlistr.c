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
        // if(head == NULL){

        // }
    }
    print("enter postion:");
    int pos,new;
    scanf("%d",&pos);
    scanf("%d",&new);
    for(int i = 0;i<pos;i++){
        node*n = malloc(sizeof(node));
        if(i == (pos-2)){
            n->next = 
        }
        n->num = new;
    }
    while(head!=NULL){
        printf("%d ",head->num);
        head = head->next;
    }
}