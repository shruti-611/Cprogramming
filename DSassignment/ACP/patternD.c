#include<stdio.h>
int main()
{
  int n,i,k=1,j;
  int arr[3][3];

for(i=0;i<3;i++)
{
 for(j=0;j<=i;j++)
  {
    printf(" %d",k);
    k++;
  }
printf("\n");
}

return 0;
}