#include<stdio.h>

int main()
{
    int i, n, k, temp, arr[10], j;
    printf("enter the value of n:");
    scanf("%d", &n);
    printf("enter the elements one by one");
    for(i=0;i<n;i++)
    {
        j=i;
        for(k=i+1;k<n;k++)
        {
         if(arr[k]<arr[j]){
             j=k;
             
         }temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
         
        }
    }
    printf("sorted array is");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}


