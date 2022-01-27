#include<stdio.h>
 struct student
 {
   int id;
   int marks;
   char fav_char;
 };

int main()
{
  struct student f,g,h;  
  f.id = 1;
  g.id = 5;
  h.id = 7;
  f.marks=66;
  g.marks=44;
  h.marks=99;
  f.fav_char= 'x';
  g.fav_char='j';
  h.fav_char='y';

  printf("f got %d marks\ng got %d marks\nh got %d marks\n",f.marks,g.marks,h.marks);
 printf("id of f  %d \nid of %d \nid of %d \n",f.id,g.id,h.id);
 printf("f fav char %c \ng fav char %c \nh fav char %c\n",f.fav_char,g.fav_char,h.fav_char);
 return 0;
}