/*
Task 1
Patern Generator:
Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234 4321
123   321
12     21
1       1

Concepts to be used.
- Loops

*/

#include <stdio.h>

void printPattern(int n)
{
   int i, j;

   for (i = 0; i < n; i++)
   {
      for (j = 1; j <= n - i; j++)
      {
         printf("%d", j);
      }

      for (j = 1; j < 2 * i; j++)
      {
         printf(" ");
      }

      for (j = n - i; j >= 1; j--)
      {
         printf("%d", j);
      }

      printf("\n");
   }
}

int main()
{
   int n;

   printf("Enter the value of n: ");
   scanf("%d", &n);

   printPattern(n);

   return 0;
}
