//array insertion without increasing the size of array

/* this program will take input the array
and will replace a number with another value 
by pushing others to right/left and
discard the right/leftmost number and also
without increasing the array size */

#include <stdio.h>
#define MAX_SIZE 50

int main(int argc, char const *argv[]){

 int arr[MAX_SIZE];
int size,position,value,i;

puts("Enter the array size :");
scanf("%d",&size);

printf("Enter %d numbers:\n",size);
for ( i = 0; i < size; i++)
{
    scanf("%d",&arr[i]);
}

puts("Array before insertion :\n");
for ( i = 0; i < size; i++)
{
    printf("%d, ",arr[i]);
}
printf("\n");

puts("Enter the value:\n");
scanf("%d",&value);
puts("enter the position(index) \n");
scanf("%d",&position);

for ( i = size; i > position; i--)
{
    arr[i]= arr[i-1];
}

arr[position]= value;

puts("After insertion :\n");
for ( i = 0; i < size; i++)
{
    printf("%d, ",arr[i]);
}
    return 0;
}
