#include <stdio.h>

float sub(float first_number, float second_number){

    float result;

    result = first_number - second_number;

    printf("%f", result);

}

float add(float first_number, float second_number){

    float result;

    result = first_number + second_number;

    printf("%f", result);


}

float multi(float first_number, float second_number){

    float result;

    result = first_number * second_number;

    printf("%f", result);

}


int main(){

    float first_number, second_number;
    
    char op;

    scanf("%f", &first_number);

    scanf("%f", &second_number);
    
    scanf("%s", &op);


    if (first_number > second_number){

        sub(first_number, second_number);

    }

    else if (first_number < second_number){

        add(first_number, second_number);


    }

    else{

        multi(first_number, second_number);

    }

}