/*
Task 4
Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5

*/

#include <stdio.h>
#include <stdlib.h>

void smallestlargestDigits(int n, int *nums)
{
   int i, j;
   int smallestDigit = 9;
   int largestDigit = 0;
   int currentDigit;

   for (i = 0; i < n; i++)
   {
      int num = nums[i];

      while (num > 0)
      {
         currentDigit = num % 10;

         if (currentDigit < smallestDigit)
         {
            smallestDigit = currentDigit;
         }
         if (currentDigit > largestDigit)
         {
            largestDigit = currentDigit;
         }

         num /= 10;
      }
   }

   if (smallestDigit == 9 && largestDigit == 0)
   {
      printf("Not Valid\n"); // give negative ingeter as input
   }
   else
   {
      printf("Smallest Digit: %d\n", smallestDigit);
      printf("Largest Digit: %d\n", largestDigit);
   }
}

int main()
{
   int n;
   printf("Enter the value of n: ");
   scanf("%d", &n);

   int *nums = (int *)malloc(n * sizeof(int));
   if (nums == NULL)
   {
      printf("Memory allocation failed.\n");
      return 1;
   }

   int i;
   printf("Enter %d numbers:\n", n);
   for (i = 0; i < n; i++)
   {
      printf("n%d: ", i + 1);
      scanf("%d", &nums[i]);
   }

   smallestlargestDigits(n, nums);
   free(nums);

   return 0;
}
