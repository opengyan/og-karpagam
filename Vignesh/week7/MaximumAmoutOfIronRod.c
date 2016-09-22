
#define ARR_SIZE 100
#include<stdio.h>
   static int arr1[ARR_SIZE],f=0,max=0,f1=0,MAX_POINT,arr[ARR_SIZE];
int printArray(int arr[], int arr_size);
 
int printCompositions(int n, int i)
{
  if (n == 0)
  {
    f=printArray(arr, i);
      if(f>f1)
          f1=f;
      return f1;
  }
  else if(n > 0)
  {
    int k; 
    for (k = 1; k <= MAX_POINT; k++)
    {
      arr[i]= k;
       printCompositions(n-k, i+1);
    }
  }
    return f1;
}
 int printArray(int arr[], int arr_size)
{
  int i,sum=0;
  for (i = 0; i < arr_size; i++){
  sum=sum+arr1[arr[i]-1];}
    return sum;
}
 
/* Driver function to test above functions */
int main()
{
  int n = 5,c=0;
  printf("Differnt compositions formed by 1, 2 and 3 of %d are\n", n);
    scanf("%d",&n);
    int i,j;
    
     for(i=0;i<n;i++){
          scanf("%d",&arr1[i]);
         printf("%d ",arr1[i]);
     }
    max=arr1[n-1];
     for(i=n;i>0;i--)
            {
             j=n-i;
             c=0;
         c=c+arr1[i-1];
         MAX_POINT=j;
                c+= printCompositions(j, 0);
                if(max<c)
                    max=c;
         f=0;f1=0;
     }
    printf("%d",max);
  return 0;
}
