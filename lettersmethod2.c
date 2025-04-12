#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
void uppercase(FILE*in,FILE*file1){
        char line[200];
    while (fgets(line, sizeof(line), in) != NULL) {
        for (int i = 0; line[i] != '\0'; i++) { 
            if (line[i] >= 'a' && line[i] <= 'z') { 
                line[i] -= 32; 
            }
        }
    fprintf(file1,"%s",line);
}
}
void lowercase(FILE*in,FILE*file1){
            char line[2000];
    while (fgets(line, sizeof(line), in) != NULL) { 
        for (int i = 0; line[i] != '\0'; i++) {  
            if (line[i] >= 'A' && line[i] <= 'Z') { 
                line[i] += 32;
            }
        }
    fprintf(file1,"%s",line);
}
}
void reversecase(FILE*in,FILE*file1){
    char line[200];
while (fgets(line, sizeof(line), in) != NULL) { 
for(int i = strlen(line) - 1;i>=0;i--){
    fprintf(file1,"%c",line[i]);
}
}
}
int main(int argc,char*argv[]){
    if(argc!=4){
        fprintf(stderr,"Error While Processing");
        return 1;
    }
    FILE*in = fopen(argv[1],"r");
    FILE*file1 = fopen(argv[2],"w");
    if(in ==NULL){
        fprintf(stderr,"Error While Processing 1");
        return 1;
    }
    if(file1 ==NULL){
        fprintf(stderr,"Error While Processing 1");
        return 1;
    }
    int opt;
    int flag = 0;
    while((opt = getopt(argc,argv,"ulr"))!=-1){
        flag = 1;
        switch(opt){
            case 'u' :
            uppercase(in,file1);
            break;
            case 'l' :
            lowercase(in,file1);
            break;
            case 'r' :
            reversecase(in,file1);
            break;
            default :
            break;
        }
    }
    if(!flag){
        fprintf(stderr, "Error: No processing option provided\n");
    return 1;
    }
    fclose(in);
    fclose(file1);
    return 0;
}