#include<stdio.h>
typedef struct island{
    char * name;
    char *open;
    char*close;
    struct island *next;
}island;
void display(island *s){
    struct island *i = s;
    for(;i != NULL;i = i->next){
        printf("%s opens at %s and closes at %s\n",i->name,i->open,i->close);
    }
}
int main(){
    island maldives = {"Maldives","9:00","16:00",NULL};
    island an = {"Andaman","9:30","17:30",NULL};
    island skull = {"Skull","10:00","21:00",NULL};
    maldives.next = &an;
    an.next = &skull;
    display(&maldives);
}