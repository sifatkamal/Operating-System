#include <stdio.h>

void Odd_or_Even(int arr[], int n){

    printf("Result:\n");

    for (int i = 0; i < n; i++) {

        if (arr[i] % 2 == 0){

            printf("%d: Even\n", arr[i]);

        } 
        
        else{

            printf("%d: Odd\n", arr[i]);

        }
    }
}

int main(int argc, char *argv[]){

    int digits[] = {1, 4, 6, 3, 56, 7, 8};

    int n = sizeof(digits) / sizeof(digits[0]);

    Odd_or_Even(digits, n);

    return 0;
}

