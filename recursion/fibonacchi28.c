#include<stdio.h>

int fib_recursive(int num)
{  
  if(num==1 || num==0)
     return num-1;
   else
     return (fib_recursive(num-1)+fib_recursive(num-2));     
 
}

int fib_iterative(int num)
{
  int a=0;
  int b=1;

for(int i=0;i<num;i++)
  {
      b=a+b;  //1
      a=b-a;  //1
  }
  return a;
}


int main()
{
  int num;
  printf("enter the no.");
  scanf("%d",&num);

printf("the value using iterative approch is %d\n",fib_iterative(num));
printf("the value using recursive approch is %d\n",fib_recursive(num));

return 0;

}