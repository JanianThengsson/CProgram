#include<stdio.h>

//function declaration
void bubbleSort(int array[], int size);

//main function
int main()
{
	//local variable in main function
	int index, size;
	
	//getting size of an array
	printf("Enter size:\n");
	scanf("%d",&size);
	//declare array and its size
	int a[size];
	
	//getting input
	printf("Please enter a value for each element\n");
	for(index = 0; index < size ; index++)
	
		scanf("%d",&a[index]);
	
		
	//printing initial array
	printf("Presorted array:\n");
	for(index = 0; index < size; index++)
		printf("%d\n",a[index]);

	//func calling
	bubbleSort(a,size);
	printf("After sorted:\n");
	for(index = 0; index< size; index++)
		printf("%d\n",a[index]);
	
}

//func definition
void bubbleSort(int array[], int size)
{
	//array var and size var
	int i,j,tmp;
	for(i = 0; i < size - 1 ; i++)//i indicates step 
	{
		for(j = 0; j < size - 1 - i; j++)//j indicates elements
		{
			if(array[j] > array[j+1])
			{
				tmp = array[j+1];
				array[j+1] = array[j];
				array[j] = tmp; 
			}
		}
	}
	

}
