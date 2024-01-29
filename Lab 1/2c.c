#include <stdio.h>

#include <string.h>

int main(){

    char inputt[200];

    gets(inputt);

    int length;

    int index= 0;

    int upper=0;

    int lower=0;

    int digit=0;

    int special=0;

    length = strlen(inputt);

    for (int i=0; i<=length; i++){

        if ((inputt[index]>=(int)'a') && (inputt[index]<=(int)'z')){

            lower+=1;

        }

        else if ((inputt[index]>=(int)'A') && (inputt[index]<=(int)'Z')){

            upper+=1;


        }

        else if (inputt[index]>=(int)'0' && inputt[index]<=(int)'9'){

            digit+=1;

        }

        else if (inputt[index]==(int)'_' || inputt[index]==(int)'$' || inputt[index]==(int)'#' || inputt[index]==(int)'@'){

            special+=1;

        }

        else{
            
            index=index+1;

            continue;
            
        }

        index=index+1;

    }
    
    int point = 0;

    if (lower == 0){
        
        point+=1;

        if ((upper == 0) || (digit == 0) || (special == 0)){

            printf("Lowercase character missing, ");


        }

        else{

            printf("Lowercase character missing");

        }

        

    }

    if (upper == 0){
        
        point+=1;

        if ((digit == 0) || (special == 0)){

            printf("Uppercase character missing, ");


        }

        else{

            printf("Uppercase character missing");

        }

        

    }


    if (digit == 0){
        
        point+=1;

        if (special == 0){

            printf("Digit missing, ");

        }
        
        else{

            printf("Digit missing");

        }

    }

    if (special == 0){
        
        point+=1;

        printf("Special character missing");

    }
    
    if (point == 0){
    
        printf("OK");
    
    }


    return 0;

    

}