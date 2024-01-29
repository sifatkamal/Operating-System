#include <stdio.h>

#include <string.h>

int main(){

    char updated_email[] = "@sheba.xyz";
    
    char inputt[200];

    scanf("%s", inputt);

    char *pointer = strstr(inputt, updated_email);

    if (pointer != NULL){
        
        printf("Email address is okay");
        
    }
        
    else{
        
        printf("Email address is outdated");
        
    }
        
    return 0;

}