#include<stdio.h>
int sum(int n);
int main(){
    int n = 10;
    int r = sum(n);
    printf("%d",r);
    return 0;
}
int sum(int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = sum + i;
    }
    return sum;
}