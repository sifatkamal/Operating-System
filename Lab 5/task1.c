#include <stdio.h>

#include <stdbool.h>

int main(){

    int n = 5; // Number of processes
    
    int m = 4; // Number of resources
    
    int alloc[5][4] = { { 0, 1, 0, 3 }, // P0 // Allocation Matrix
    { 2, 0, 0, 0 }, // P1
    { 3, 0, 2, 0 }, // P2
    { 2, 1, 1, 5 }, // P3
    { 0, 0, 2, 2 } }; // P4

    int max[5][4] = { { 6, 4, 3, 4 }, // P0 // MAX Matrix
    { 3, 2, 2, 1 }, // P1
    { 9, 1, 2, 6 }, // P2
    { 2, 2, 2, 8 }, // P3
    { 4, 3, 3, 7 } }; // P4

    int avail[4] = { 3, 3, 2, 1 }; //Available resources


    int need[5][4];

    int score = 0;

    bool flag[5] = {false};

    for (int i = 0; i < 5; i++){
    
        for (int j = 0; j<4; j++){
    
            need[i][j] = max[i][j] - alloc[i][j];
    
        }
    
    }

    
    

    int count = 0;

    while (count < 2){
    
        for (int i = 0; i < 5; i++){
    
            score = 0;
    
            for (int j = 0; j < 4; j++){
    
                if (need[i][j] <= avail[j]){
    
                    score+=1;
    
                }
    
                else{
    
                    break;
    
                }
    
            }




    
            if(score == 4){
    
                flag[i] = true;
    
                while (score >= 0){
    
                    avail[score] = avail[score] + alloc[i][score];
    
                    score-=1;
    
                }
    
            }
    
        }

        count+=1;
    
    }
    


    
    int result = 0;
    
    for(int i = 0; i < 5; i++){
    
        if (flag[i] == false){
    
            result+=1;
    
            break;
    
        }
    
    }
    
    if (result == 0){
    
        printf("Safe here");
    
    }
    
    else{
    
        printf("Deadlock Ahead");
    
    }






}