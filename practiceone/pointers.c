#include<stdio.h>
 typedef struct{
    char*name;
    int age;
}student;

void hello(student *a){
    student *ptr = a;
    ptr->name = "Shubham";
}

int main(){
    student nikki = {"Nikki",18};
    hello(&nikki);
    printf("%s",nikki.name);
}