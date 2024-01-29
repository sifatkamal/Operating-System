#include <stdio.h>

#include <string.h>

int main(){

	char textt[200];

	FILE *inputt, *outputt;

	inputt = fopen("btext_in.txt","r");

	outputt = fopen("btext_out.txt","w");

	fscanf(inputt, "%[^\n]s", textt);


	char *pointer = strtok(textt,"  ");

	while (pointer != NULL){

		fputs(pointer, outputt);

		fputs(" ", outputt);

		pointer = strtok(NULL,"  ");    

	}
	
    
	fclose(inputt);

	fclose(outputt);

   	return 0;
}
