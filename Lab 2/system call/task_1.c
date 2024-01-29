#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdbool.h>

int main() {

    int file;
    
    file = open("task_1.txt", O_WRONLY | O_CREAT, 0666);

    char arr[40];

    if (file == -1) {

        return 0;

    }
    

    while (true) {

        scanf("%s", arr);

        if (strcmp(arr, "-1") == 0) {

            break;

        }

        write(file, arr, strlen(arr));

    }

    close(file);

}