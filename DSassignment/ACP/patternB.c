#include<stdio.h>
int main()
{
  int n,i,j;
  int arr[3][3];

for(i=0;i<3;i++)
{
 for(j=0;j<=i;j++)
  {
    printf(" %d",j+1);
  }
printf("\n");
}

return 0;
}