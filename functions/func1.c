#include<stdio.h>

           // with arguments with return

/* int sum(int x,int y)
 {
   return x+y;
 }
 int main()
 {
   int a=10;
   int b=5;
   sum(a,b);
   printf("addition is %d",sum(a,b));
   return 0;
  }*/ 


            // with argument without return value 

/*void printstar(int n)
{ 
  for(int i=0;i<n;i++)
  printf("%c",'*');
}

int main()
{ 
 printstar(7);
return 0;
} */

            //without argument with return

/*int num()
{
  int i,j;
  printf("enter two numbers");
  scanf("%d %d",&i,&j);
  int a=i+j;
  return a;
}

int main()
{
  int c=num();
  printf("addition is %d",c);
  return 0;
} */

             //without arguments without return

/*void value(void)
{
  int a=5,b=6;
  printf("the addition is %d",a+b);
}

void main()
{
  value();
} */