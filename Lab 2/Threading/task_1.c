#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <pthread.h>



void* block1(void* arg){



}

int main(){

	pthread_t thread [6];
	
    int count = 1;
	

    for (int i = 0; i<6; i++){

    	pthread_create(&thread[count], NULL, block1, NULL);
	
    	pthread_join(thread[count], NULL);
	
    	printf("Thread-%d running\n", count);
	
    	printf("Thread-%d closed\n", count);
	
    	count+=1;        


    }
	
}

