#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
 {
   int i, j, k, n,count,a[10], temp, *number;
   double cpu_time_taken;
   clock_t start,end;
 
    for(n=20000;n<=100000;n=n+20000){
        
        number=(int*)malloc(sizeof(int)*n);
         
         for(i=0;i<n;i++)
         number[i]=rand();
    
   
      
 
   start=clock();    
   for(i=1;i<n-1;i++){
       j=i;
       while(j>0 && a[j-1]>a[j]){
           temp=a[j-1];
           a[j-1]=a[j];
           a[j]=temp;
           j--;
       }
   }
    end=clock();    
   
   
   cpu_time_taken=((double)(end-start))/CLOCKS_PER_SEC;
   printf("\nno. of variables    time elapsed");
    
   printf("\n The CPU time taken: %f",cpu_time_taken);
    }
   return 0;

}


