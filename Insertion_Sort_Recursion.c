#include<stdio.h>
#include<stdlib.h>

void insertion_sort_recur(int* array, int length);
void display_insertion_recur(int array[], int length);
int main()
{
	int length;
	printf("Enter the length of the array:- ");
	scanf("%d", &length);

	int array[50];
	for (int i = 0; i < length; i++)
	{
		printf("Element No %d is:- ",i+1);
		scanf("%d", &array[i]);
	}

	insertion_sort_recur(array, length);
	display_insertion_recur(array, length);
}

void insertion_sort_recur(int* array, int length)
{
	if (length<=1)
	{
		return;
	}
	else
	{
		insertion_sort_recur(array, length - 1);

		int key = array[length - 1];
		int j = length - 2;

		while (j >= 0 && array[j] > key)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
}

void display_insertion_recur(int array[], int length)
{
	printf("\n After sorting the array is -----\n\n");
	for (int i = 0; i < length; i++)
	{
		printf("%d\t", array[i]);
	}
}
