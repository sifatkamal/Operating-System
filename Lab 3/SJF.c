#include <stdio.h>

#include <stdlib.h>

#include <stdbool.h>

typedef struct process {

    int pid;

    int arrival_time;
    
    int burst_time;
    
    int remaining_time;
    
    int completion_time;
    
    int turnaround_time;
    
    int waiting_time;

} Process;

#define MAX_PROCESSES 100

int main(){

    Process processes[MAX_PROCESSES];

    int processes_quantity;

    printf("Number of process: ");

    scanf("%d", &processes_quantity);
    


    for (int i=0; i<processes_quantity; i++){

        processes[i].pid = i+1;

        printf("P%d: \n", processes[i].pid);

        printf("Arrival time: ");
        
        scanf("%d", &processes[i].arrival_time);
        
        printf("Burst time: ");
        
        scanf("%d", &processes[i].burst_time);
        
        processes[i].remaining_time = processes[i].burst_time;


    }


    int temp = 0;

    while (true){

        int min = 999999999;

        int index = -1;

        for (int i = 0; i < processes_quantity; i++){

            if (processes[i].arrival_time <= temp && processes[i].remaining_time > 0 && processes[i].remaining_time < min){
                
                min = processes[i].remaining_time;
                
                index = i;
            
            }
        
        }

        if (index != -1){

            processes[index].remaining_time = processes[index].remaining_time-1;

            temp+=1;

            if (processes[index].remaining_time == 0){
                
                processes[index].completion_time = temp;
                
                processes[index].turnaround_time = processes[index].completion_time - processes[index].arrival_time;
                
                processes[index].waiting_time = processes[index].turnaround_time - processes[index].burst_time;
            
            }            

        }

        else{

            break;


        }
    
    }
    
    for (int i = 1; i <= processes_quantity; i++){

        printf("P%d\n", i);

        printf("Completion Time: %d ", processes[i].completion_time);

        printf("Turn Around Time: %d ", processes[i].turnaround_time);

        printf("Waiting Time: %d\n", processes[i].waiting_time);
    
    }

    return 0;





}


    








