#include<stdio.h>
 
// Function to return k'th smallest element in a given array
int kthSmallest(int data[10], int n, int k)
{
    
 
    // Return k'th element in the sorted array
    return data[k - 1];
}
// C program for implementation of Bubble sort
#include <stdio.h>

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void bubbleSort(int data[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)	

	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
		if (data[j] > data[j+1])
			swap(&data[j], &data[j+1]);
}

/* Function to print an array */
void printArray(int data[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", data[i]);
	printf("\n");
}
 
// main program code
int main()
{
	int k,n,i;
	printf("enter the value of k: ");
	scanf("%d",&k);
    
    int data[10];
    printf("no of elements in the array: ");
    scanf("%d",&n);
    printf("enter elements in the array: ");
	printf("\n");
    for(i =0;i<n;i++){
    	scanf("%d",&data[i]);
	}
	bubbleSort(data, n);
	printf("Sorted array: \n");
	printArray(data, n);

    
    return 0;
}
