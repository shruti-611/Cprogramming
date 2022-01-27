#include<stdio.h>
int main()
{
  int n,i,k=8,j;
  int arr[3][3];

for(i=0;i<3;i++)
{
 for(j=3;j>=0;j--)
  {
    printf(" %d",k);
    k--;
  }
printf("\n");
}

return 0;
}