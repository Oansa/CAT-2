/*
AUTHOR: KAMANDE MUIRURI
REG NO: CT101/G/23908/24
7-11-2024
2D Array
*/





#include <stdio.h>

int main(){
	int i,j;
	int scores[2][2]= {{65, 92}, {35,70}};
	
	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			printf("Scores[%d][%d]= %d\n", i,j, scores[i][j]);
			
		}
		
	}
	
	return 0;
	}
