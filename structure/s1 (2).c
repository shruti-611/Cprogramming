#include<stdio.h>
struct ram
{
  int money;
  char name;
  float height;

};
int main()
{
  struct ram z={20,'j',6.5};
printf("money=%d /n name=%c/n height=%d",z.money,z.name,z.height);


return 0;    
}