#include <stdio.h>

void sorting(int arr[], int n){

    for (int i = 0; i < n - 1; i++){

        for (int j = 0; j < n - i - 1; j++){

            if (arr[j] < arr[j + 1]){

                int value = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = value;
            }
        }
    }
}

int main(int argc, char *argv[]) {

    int digits[] = {1, 4, 6, 3, 56, 7, 8};

    int n = sizeof(digits) / sizeof(digits[0]);

    sorting(digits, n);

    printf("Sorted Array: ");

    for (int i = 0; i < n; i++){

        printf("%d ", digits[i]);

    }

    printf("\n");

    return 0;
}

