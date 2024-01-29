#include <stdio.h>

#include <stdlib.h>

typedef struct process {

    int pid;

    int arrival_time;
    
    int burst_time;
    
    int remaining_time;
    
    int completion_time;
    
    int turnaround_time;
    
    int waiting_time;

    int priority;

} Process;

#define MAX_PROCESSES 100

int main(){

    Process processes[MAX_PROCESSES];

    int quantum;

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

        printf("Priority: ");
        
        scanf("%d", &processes[i].priority);
        
        processes[i].remaining_time = processes[i].burst_time;


    }


    int remaining_processes = processes_quantity;
    
    int current_time = 0;

    int finished = 0;

    while (finished < processes_quantity){

        int index = -1;

        for (int i = 0; i < processes_quantity; i++){

            if (processes[i].arrival_time <= current_time && processes[i].remaining_time > 0 && (index == -1 || processes[i].priority < processes[index].priority)) {
                
                index = i;
            
            }
        
        }

        if (index == -1){

            current_time+=1;

            continue;
        } 
        
        else{

            processes[index].remaining_time-=1;
            
            current_time+=1;

            if (processes[index].remaining_time == 0){

                processes[index].completion_time = current_time;
                
                processes[index].turnaround_time = processes[index].completion_time - processes[index].arrival_time;
                
                processes[index].waiting_time = processes[index].turnaround_time - processes[index].burst_time;

                printf("P%d\n", index+1);

                printf("Completion Time: %d ", processes[index].completion_time);

                printf("Turn Around Time: %d ", processes[index].turnaround_time);

                printf("Waiting Time: %d\n", processes[index].waiting_time);

                
                processes[index].remaining_time = -1;
                
                finished+=1;

            }
        }
    }


    return 0;


    

}