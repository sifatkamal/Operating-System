#include <stdio.h>

#include <unistd.h>

#include <sys/wait.h>

int main(){
    
    int a;
    
    int b;
    
    int c;
    
    int pid;
    
    int count = 4;
    
    a = fork();
    
    b = fork();
    
    c = fork();
    
    if ((a == 0) || (b == 0) || (c == 0)){
        
        pid = getpid();
        
        if (pid%2 != 0){
            
            count+=1;
            
            fork();
            
            
        }


    }
    
    
    else{
        
        wait(NULL);
        
        printf("%d\n",count);
        
    }
    
    


    return 0;    


}
