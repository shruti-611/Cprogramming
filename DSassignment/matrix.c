#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],d[3][3],e[3][3];
    int i,j,k;

 printf("enter the elements of 1st matrix ");

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
     scanf("%d",&a[i][j]);
   }

 }

 printf("enter the elements of 2st matrix ");

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
    scanf("%d",&b[i][j]);
   
 }

 printf("1st matrix is\n");

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
     printf("  %d",a[i][j]);
   }
  printf("\n");
 }

 printf("2nd matrix is\n");

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
     printf("  %d",b[i][j]);
   }
   printf("\n");
 }

 printf("addition of matrix is\n");

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   { 
     c[i][j]=a[i][j]+b[i][j];
     printf("  %d",c[i][j]);
   }
   printf("\n");
 }

 printf("subtraction of matrix is\n");

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   { 
     d[i][j]=a[i][j]-b[i][j];
     printf("  %d",d[i][j]);
   }
   printf("\n");
 }

printf("multiplication of matrix is\n");

 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
    for(k=0;k<3;k++);
     { 
         e[i][j]=a[k][j]*b[i][k];
         printf("  %d",c[i][j]);
    }
   }
   printf("\n");
 }
return 0;
}