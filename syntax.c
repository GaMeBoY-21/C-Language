#include<stdio.h>
#include<stdlib.h>
int main(){
    struct student{
        char*name;
        int a;
        char str[80];
    };
    struct student nikki = {"nikki",18,"school"};
    struct student *ptr = &nikki;
    printf("%s",ptr->name);
    return 0;
}