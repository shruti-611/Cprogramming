#include<stdio.h>
int main()
{
  int n,arr[n],i;
  printf("enter the no. of elements");
  scanf("%d",&n);
  printf("enter the elements of arrays\n");
  for(i=0;i<n;i++)
   scanf("%d",&arr[i]);

 printf("your array is:");

  for(i=0;i<n;i++)
     printf(" %d ",arr[i]);

return 0;
}