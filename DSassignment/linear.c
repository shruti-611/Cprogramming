#include<stdio.h>
int main()
{
  int a[10],i,flag,r;
printf("enter the elements ");

for(i=0;i<10;i++)
 scanf("%d",&a[i]);

printf("enter the no. to be searched ");
scanf("%d",&r);

for(i=0;i<10;i++)
{
if(a[i]==r)
 {
   flag=1;
   break;
 }
}
if(flag==1)
   printf("elemet found at location  = %d",i+1);

else
  printf("element not found");

return 0;
}