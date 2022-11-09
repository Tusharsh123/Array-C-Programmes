


#include <stdio.h>

void swap(int* obdure, int* obdureit)
{
	int temp = *obdure;
	*obdure = *obdureit;
	*obdureit = temp;
}
void selectionSort(int arr[], int n)
{
	int i, j, min_idq;
	for (i = 0; i < n - 1; i++) {
		min_idq = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idq])
				min_idq = j;

		
		swap(&arr[min_idq], &arr[i]);
	}
}


void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}


int main()
{
	int arr[] = { 2, 7, 4, 5, 9 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Original array: \n");
	printArray(arr, n);

	selectionSort(arr, n);
	printf("\nSorted array in Ascending order: \n");
	printArray(arr, n);

	return 0;
}
