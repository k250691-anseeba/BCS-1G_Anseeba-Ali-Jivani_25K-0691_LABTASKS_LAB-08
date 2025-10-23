#include <stdio.h>

int main(){
	
	int i,j;
	int empty, student;
	
	printf("Classroom Seating Chart:\n");
	printf("========================\n");
	printf("(x = student, o = empty)\n\n");
	
    for(i=1;i<6;i++){ 
	    printf("ROW %d:   ", i); 
	    if(i%2 == 0){
            for(j=1;j<6;j++){
		        if(j%2 != 0){
	            printf(" o ");
	            empty++;
		    }
		    else{
		        printf(" x ");
		        student++;
			}
        }
        printf("\n");
    }
    else{
    
            for(j=1;j<6;j++){
		        if(j%2 != 0){
	            printf(" x ");
	            student++;
		    }
		    else{
		        printf(" o ");
		        empty++;
			}
        }
        printf("\n");
	    }
    }
    
    
    printf("\n\nSummary:\n");
    printf("Students: %d\n", student);
    printf("Empty desks: %d\n", empty);
    printf("Total desks: %d\n", student+empty);

	return 0;
}
