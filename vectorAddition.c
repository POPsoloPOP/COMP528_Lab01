#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//Function for printing the array
int printArray(int array[], int ARRSIZE){
	int i;
	for(i = 0; i < ARRSIZE; i++){
		printf("%d ", array[i]);
	}
} 


int main(void){
	
	const int ARRSIZE = 10;

	int arr1[ARRSIZE];

	int arr2[ARRSIZE];

	int arr3[ARRSIZE];

	int i;

	srand(time(NULL)); //Initialise random seed. Seed will be based on time.

	for(i = 0; i < ARRSIZE; i++){
		arr1[i] = rand() % 100; //assign arr1 with random values between 0-99
		
		//TASK: Initialise arr2 with random variables
		arr2[i] = rand() % 100;
		//arr3 meaning
		arr3[i]=arr1[i]+arr2[i];

	}

	//Print Array1 Values

	printf("Array1: ");
	printArray(arr1, ARRSIZE);

	//TASK: Print Array2 Values
	printf("\nArray2: ");
	printArray(arr2, ARRSIZE);
	/*
	TASK: Declare a new array, add each array together element by element.
 	      Print the new array when done.
	*/
	printf("\nArray3: \n");
	printArray(arr3,ARRSIZE);

}



