#include <stdio.h>

int main(){
	
	int i ,j, max, max_row, max_col;
	int matrix[3][3] = {{12,34,56},{72,4,6},{90,67,12}};
	
	max = matrix[0][0];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matrix[i][j] > max){
			    max = matrix[i][j];
			    max_row = i;
			    max_col = j;
			}
		}
	}
	
	printf("At index [%d][%d] lies maximum number: %d", max_row+1 , max_col+1, max);
	
	return 0;
}
