#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

    int digits[] = {1, 4, 6, 3, 56, 7, 8};

    int n = sizeof(digits) / sizeof(digits[0]);

    pid_t child = fork();

    if (child == 0){
        
        execv("./sort", NULL);

    } 
    
    else if (child > 0) {
        
        wait(NULL);

        execv("./oddeven", NULL);

    }
    


    return 0;
}

