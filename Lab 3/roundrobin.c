#include <stdio.h>
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

    int quantum;

    int processes_quantity;

    printf("Number of process: ");

    scanf("%d", &processes_quantity);

    printf("Quantum ");

    scanf("%d", &quantum);

    
    Process processes[MAX_PROCESSES];

    for (int i=0; i<processes_quantity; i++){

        processes[i].pid = i+1;

        printf("P%d: \n", processes[i].pid);
        
        printf("Arrival time: ");
        
        scanf("%d", &processes[i].arrival_time);
        
        printf("Burst time: ");
        
        scanf("%d", &processes[i].burst_time);
        
        processes[i].remaining_time = processes[i].burst_time;


    }    

    int current_time = 0;

    int remaining_processes = processes_quantity;

    while (remaining_processes > 0){

        for (int i = 0; i < processes_quantity; i++){

            if (processes[i].arrival_time <= current_time && processes[i].remaining_time > 0){

                int execution_time;


                if (processes[i].remaining_time < quantum){
                
                    execution_time = processes[i].remaining_time;
                
                } 
                
                else{
                    
                    execution_time = quantum;
                
                }

                processes[i].remaining_time -= execution_time;

                current_time += execution_time;

                if (processes[i].remaining_time == 0) {

                    processes[i].completion_time = current_time;

                    processes[i].turnaround_time = processes[i].completion_time - processes[i].arrival_time;

                    processes[i].waiting_time = processes[i].turnaround_time - processes[i].burst_time;

                    remaining_processes-=1;
                }
            }
        }
    }

    for (int i = 0; i < processes_quantity; i++){

        printf("P%d\n", i);

        printf("Completion Time: %d ", processes[i].completion_time);

        printf("Turn Around Time: %d ", processes[i].turnaround_time);

        printf("Waiting Time: %d\n", processes[i].waiting_time);
    
    }

    return 0;
}
