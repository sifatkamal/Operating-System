#include <stdio.h>

#include <pthread.h>

int ar[3];

void *name(int j){

    char n[100];
    
    printf("Enter name-%d:", j);
    
    scanf("%s", &n);
    
    int l = strlen(n);
    
    int k = 0;
    
    int sum = 0;
    
    while (k < l){

        sum = sum + n[k];
        
        k += 1;
    
    }
    
    ar[j-1] = sum;
    
    pthread_exit(NULL);

}

void *compare(){

    if (ar[0] == ar[1] && ar[1] == ar[2] && ar[0] == ar[2]){
        
        printf("Youreka");
    
    }
    
    else if (ar[0] == ar[1] || ar[1] == ar[2] || ar[0] == ar[2]){

        printf("Miracle");

    }
    
    else{

        printf("Hasta la vista");

    }
    
    pthread_exit(NULL);

}

int main(){

    pthread_t a;

    int i = 1;

    while (i<=3){

        pthread_create(&a, NULL, name, i);
        
        pthread_join(a, NULL);
        
        i += 1;

    }
    
    pthread_create(&a,NULL, compare, NULL);
    
    pthread_join(a, NULL);

    return 0;

}
