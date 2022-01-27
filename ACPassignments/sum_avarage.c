#include<stdio.h>
int main()
{
  int a,i,n,avrg,sum=0;
printf("please enter how many numbers you want   ");
scanf("%d",&n);

printf("enter the numbers  ");
for(i=0;i<n;i++)
{
 scanf("%d",&a);  
sum+=a;
}

avrg=sum/n;
printf("sum of the number is : %d \n",sum);
printf("avarage of the number is : %d \n",avrg);

return 0;
}