#include <stdio.h>

#include <unistd.h>

#include <sys/wait.h>


int main(){
    
    pid_t child_process = fork();


    if (child_process == 0){

        pid_t grandchild_process = fork();

        if (grandchild_process == 0){

            printf("I am grandchild\n");

        }
        
        
        
        else{

            wait(NULL);

            printf("I am child\n");

        }
        


    }
    
    else{
        
        wait(NULL);
        
        
        printf("I am parent\n");
        
    }

    return 0;


}
