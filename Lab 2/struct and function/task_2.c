#include <stdio.h>

#include <math.h>

#include <stdbool.h>



int main(){

    int first;

    scanf("%d", &first);

    int last;

    scanf("%d", &last);

    int num;

    num = first;

    int p1;

    for (int i=first; i<last; i++){
        
        bool validation = false;
       

        if ((num == 0) || (num == 1)){
        
            validation = true;
            
        }
    
        for (int j = 2; j <= num / 2; ++j) {
    
            if (num % j == 0) {
            
                validation = true;
                
                break;
                
            }
            
        }
        
        
    
        if (validation == false){
            
            int perfect;

            p1 = num-1;

            perfect = pow(2, p1)*(pow(2, num)-1);

            if ((perfect < last) && (perfect > 1)){

                printf("%d\n", perfect);

            }

                
            
            
        }
        

        

        num+=1;
        
        




    }

    return 0;
    



}
