#include<stdio.h>
int main()
{
   int arr[]={1,2,3,4,5,67};
   int *ptr=arr;

   printf("address of 1st element is %d\n",arr);
   printf("address of 1st element is %d\n",&arr);
   printf("address of 1st element is %d\n",&arr[0]);
   printf("address of 2nd element is %d\n",arr+1);
   printf("address of 2nd element is %d\n",&arr[1]);

// arr++;  this is not valid as it contains the address of 1st element i.e constant value

   printf("value of 1st element is %d\n",arr[0]);
   printf("value of 1st element is %d\n",*(arr));
   printf("value of 1st element is %d\n",*(&arr[0]));
   printf("value of 2nd element is %d\n",arr[1]);
   printf("value of 2nd element is %d\n",*(arr+1));
   printf("value of 2nd element is %d\n",*(&arr[1]));

 return 0;
}