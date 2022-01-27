#include<stdio.h>
struct ram
{
  int money;
  char name;
  float height;
 int hg;
};
int main()
{
  struct ram z={20,'j',5,7};
printf("money=%d \n name=%c \n height=%d \n das=%d",z.money,z.name,z.height,z.hg);
return 0;    
}