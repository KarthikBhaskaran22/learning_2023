/*
Task 1
Write a function to find biggest of 2 numbers using
    - ternary operator
*/

#include <stdio.h>

int find_biggest(int a, int b)
{
   return (a > b) ? a : b;
}

int main()
{
   int num1, num2;
   
   printf("Enter the first number: ");
   scanf("%d", &num1);
   printf("Enter the second number: ");
   scanf("%d", &num2);

   int biggest = find_biggest(num1, num2);

   printf("The biggest number is: %d\n", biggest);

   return 0;
}
