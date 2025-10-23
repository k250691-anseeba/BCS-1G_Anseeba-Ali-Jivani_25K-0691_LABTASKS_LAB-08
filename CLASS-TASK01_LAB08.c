#include <stdio.h>

int main(){
	
	int i, j;
	int table;
	
	printf("How many tables do you want to print?  ");
	scanf("%d", &table);
	
	printf("\n\nMultiplication Table: (1-%d)\n\n", table);

	for(i=1 ; i<=table ; i++){
		printf("%d:",i);
		
    	for(j=1 ; j<=10 ; j++){
		    printf("%4d  " , j*i);
		}
	    printf("\n");    
	}
	
	return 0;
}
