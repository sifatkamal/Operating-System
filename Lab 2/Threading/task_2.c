#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <pthread.h>

int count = 1;

void* funcThread(void* arg){
    
    char *m = (char *)arg;
    
    for (int i = 0; i < 5; i++){
    
        printf("%s prints %d\n", m, count);
    
        count+=1;
    
    }

}

int main(){
    
	pthread_t thread [5];
	
	char*arr[]={"Thread 0","Thread 1","Thread 2","Thread 3","Thread 4","Thread 5"};
	
	
	for (int i = 0; i<6; i++){
	    
		pthread_create(&thread[i], NULL, funcThread, arr[i]);
		
		pthread_join(thread[i], NULL);
	    
	    
	}
}

