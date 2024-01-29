#include <stdio.h>

#include <string.h>

int main(){
    
    char inputt[200];

    scanf("%s", inputt);
    
    int checker = 0;

    char *first_pointer = inputt;

    char *last_pointer = inputt + strlen(inputt) - 1;

    while (first_pointer < last_pointer){

        if (*first_pointer == *last_pointer){
            
            first_pointer+=1;

            last_pointer-=1;

        }
        
        else{
            
            checker = -1;
            
            break;
            
        }

    }
        
    if (checker != -1){
        
        printf("Palindrome");
        
    }
    
    else{
        
        printf("Not Palindrome");
    
    }

    return 0;

}