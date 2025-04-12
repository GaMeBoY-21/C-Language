#include<stdio.h>
typedef struct{
    char*name;
    int age;
    char *school;
    char*citizen;
}student;
int main(){
    student nikki = {"nikki",18,"scho","indian"};
    printf("%s",nikki.name);
}
