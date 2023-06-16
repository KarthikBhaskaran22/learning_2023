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

void decreasing(int n)
{
   for (int i = n; i >= 1; i--)
   {
      printf("%d", i);
   }
}

void spaces(int n)
{
   for (int i = 1; i <= n; i++)
   {
      printf(" ");
   }
}

void increasing(int n)
{
   for (int i = 1; i <= n; i++)
   {
      printf("%d", i);
   }
}

int main()
{
   int n;
   printf("Enter the value of n: ");
   scanf("%d", &n);

   for (int i = n; i >= 1; i--)
   {
      increasing(i);
      spaces((n - i) * 2);
      decreasing(i);
      printf("\n");
   }

   return 0;
}
