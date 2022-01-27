#include<stdio.h>
int main()
{
  int a=6;
  int *ptr;
  ptr=&a;
  int *ptr2=NULL;
  
  printf("value of a is %d\n",a);
  printf("value of a is %d\n",*ptr);
  printf("value of a is %d\n",*(&a));
  printf("address of a is %d\n",ptr);
  printf("address of a is %d\n",&a);
  printf("address of ptr is  %d\n",&ptr);

printf("address of some garbage  is  %d\n",ptr2);

 return 0;   
}