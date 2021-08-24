#include<stdio.h>
#include<time.h>
#include<stdlib.h> 

//PRIYANSH MEHTA
//20BCE2292

int main(){
	int row1, col1, row2, col2, i,j,k, sum=0;
	double time_spent = 0.0 ;
	int mat1[10][10], mat2[10][10], matmul[10][10]; //creating 3 matrices
	printf("input row and column for mat1: ");
	scanf("%d%d",&row1,&col1);
		printf("input row and column for mat2: ");
	scanf("%d%d",&row2,&col2);
	
	printf("input elements for mat1: \n");
	for(i=0;i<row1;i++){ // taking inputs for matrix 1
		for(j=0;j<col1;j++){
		
			scanf("%d",&mat1[i][j]);
		}
	}
	if(col1!=row2){
	
		printf("multiplication not possible"); //checking matrix mul condition
}
	else{
		printf("input elements for mat2: \n");
		for(i=0;i<row2;i++){ // taking inputs for matrix 2
		for(j=0;j<col2;j++){
			;
			scanf("%d",&mat2[i][j]);}}}
			
			clock_t begin = clock();

	for(i=0;i<row1;i++){       //performing matrix multiplication
		for(j=0;j<col2;j++){
		for(k=0;k<row1;k++){
			sum=sum+mat1[i][k]*mat2[k][j];
		}
		
		/* Calculate the time taken by user_function()*/
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

	matmul[i][j]=sum; // assigning the value of matrix  multiplication to matmul[i][j]
	sum=0;}}
	printf("the product is:\n ");
	for(i=0;i<row1;i++){
		for(j=0;j<col2;j++){
			printf("%d", matmul[i][j]);
		}
		printf("\n");
	}
printf("The elapsed time is %f seconds", time_spent);
return 0;
			
}
