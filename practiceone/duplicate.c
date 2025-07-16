#include <stdio.h>
#include <string.h>

void duplicate(char*str){
    for(int i = 0;i <strlen(str);i++){
        char temp = *(str + i);
        for(int j = i+1;j<strlen(str);j++){
            if(temp == *(str + j)){
                for(int k = j;k<strlen(str);k++){
                    *(str + k) = *(str + k + 1);
                }
                j--;
            }
        }
    }
    printf("%s",str);
}

int main()
{
    char str[20];
    scanf("%s",str);
    duplicate(str);

    return 0;
}
