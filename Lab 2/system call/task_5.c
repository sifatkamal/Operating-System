#include <stdio.h>

#include <unistd.h>

#include <sys/types.h>

#include <sys/wait.h>

int main(){
    
    int count = 0;
    
    pid_t pid;
    
    int child, grand_child_1, grand_child_2, grand_child_3;
    
    int check = 1;
    
    pid = getpid();
    
    printf("1. Parent process ID: %d\n", pid);
    
    count+=1;
    
    child = fork();
    
    
    if (child == 0){
        
        pid = getpid();
        
        count+=1;
            
        printf("%d",count);
        
        printf(". Child process ID: %d\n", pid);
        
        
        grand_child_1 = fork();
        
        count+=1;
            
        
        if (grand_child_1 == 0){
    
            pid = getpid();
            
            printf("%d",count);
            
            printf(". Grand Child process ID: %d\n", pid);
            
            return 0;
            
        }
        
        grand_child_2 = fork();
        
        count+=1;
        
        if (grand_child_2 == 0){
    
            pid = getpid();
            
            
            
            printf("%d",count);
            
            printf(". Grand Child process ID: %d\n", pid);
            
            return 0;
            
        }
        
        grand_child_3 = fork();
        
        count+=1;
        
        
        if (grand_child_3 == 0){
    
            pid = getpid();
            
            
            
            printf("%d",count);           
            
            printf(". Grand Child process ID: %d\n", pid);    
            
            return 0;
            
        }
        
        
    }
    
    else{
        
        wait(NULL);
        
    }
    
    return 0;
}
