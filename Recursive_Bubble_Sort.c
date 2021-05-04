#include<stdio.h>
#include<stdlib.h>

void bubble_sort_recur(int* array, int length);
void swap(int* x, int* y);
void display(int array[], int length);

int main()
{
	int length;
	printf("Enter the number of elements of the array:- ");
	scanf("%d", &length);

	int array[50];
	for (int i = 0; i < length; i++)
	{
		printf("Element No %d is:- ",i+1);
		scanf("%d", &array[i]);
	}

	bubble_sort_recur(array, length);
	display(array, length);
}

void bubble_sort_recur(int* array, int length)
{
	if (length==1)
	{
		return;
	}
	else
	{
		// one pass of bubble sort.
		// after this pass the largest element is fixed to the end.
		for (int i = 0; i < length-1; i++)
		{
			if (array[i]>array[i+1])
			{
				swap(&array[i], &array[i + 1]);
			}
		}
	}
	bubble_sort_recur(array, length - 1);
}

void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void display(int array[], int length)
{
	printf("\n After sorting the array is -----\n\n");
	for (int i = 0; i < length; i++)
	{
		printf("%d\t", array[i]);
	}
}