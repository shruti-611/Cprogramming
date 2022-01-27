#include<stdio.h>
struct student
{
 int id;
 int marks;
 char fav_char;
};
 int main()
{
  struct student i,j,k;
i.id=2;
j.id=7;
k.id=4;
i.marks=66;
j.marks=88;
k.marks=70;
i.fav_char='x';
j.fav_char='y';
k.fav_char='z';

printf("i got marks %d\nj got marks %d\nk got marks %d\n",i.marks,j.marks,k.marks);
printf("i fav char %c\nj fav char %c\nk fav char %c\n",i.fav_char,j.fav_char,k.fav_char);
printf("i id is %d\nj id is %d\nk id is %d\n",i.id,j.id,k.id);

return 0;
}
