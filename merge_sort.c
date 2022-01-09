#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define MAX 100
void merge(int arr[], int low, int mid, int high)
{
	int i, j, k;
	int n1 = mid - low + 1;
	int n2 = high - mid;

	int left[n1], right[n2];
    
    double cpu_time_taken;
    clock_t start,end;
    start=clock();
  
	for (i = 0; i < n1; i++)
		left[i] = arr[low + i];
	for (j = 0; j < n2; j++)
		right[j] = arr[mid + 1 + j];

	i = 0;
	j = 0;
	k = low;
	while (i < n1 && j < n2)
	{
		if (left[i] <= right[j])
		{
			arr[k] = left[i];
			i++;
		}
		else
		{
			arr[k] = right[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = left[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = right[j];
		j++;
		k++;
	}
	
	end=clock();
    cpu_time_taken=(double)(end-start)/CLOCKS_PER_SEC;
	    printf("\n CPU time taken: %f",cpu_time_taken);
}

void mergeSort(int arr[], int low, int high)
{
	if (low < high) {
		int mid= low + (high - low) / 2;

		mergeSort(arr, low, mid);
		mergeSort(arr, mid+1, high);

		merge(arr, low, mid, high);
	}
}


int main()
{
	int arr[MAX];
	int n,i;
	printf("Enter How Many Elements : ");
    scanf("%d",&n);

    printf("Enter the Numbers : ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    mergeSort(arr, 0, n - 1);
    printf("\n \n Sorted array: \n");

    for (i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
	return 0;
}


