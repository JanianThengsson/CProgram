/*
This is a program to demonstrate how to perform insertion sort in ascending order
*/
#include<stdio.h>

//function declaration
void insertion_sort(long int array[], int size);

int main()
{
	unsigned int size, index;
	printf("Please enter size of an array:\n");
	scanf("%d",&size);
	long int a[size];
	
	printf("Please enter value of each key\n");
	for(index = 0; index < size; index++)
		scanf("%ld",&a[index]);
	
	printf("You have given: ");
	for(index = 0; index < size ; index++)
		printf("%d",a[index]);
	
	insertion_sort(a,size);
	
	//sorted
	printf("After sorted \n");
	for(index=0; index<size; index++)
		printf("%ld\n",a[index]);
	
	
}

void insertion_sort(long int array[], int size)
{
	int i,j, temp;
	
	for( i=0; i<size-1; i++)
	{
		for(j=i; j>=0; j--)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
}
