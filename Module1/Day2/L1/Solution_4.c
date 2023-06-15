/*
Task 4
Write a program to find total number of bits set in a given array.
Say we have a array of 3 elements
a[3] = {0x1, 0xF4, 0x10001};
The total number of set bits in the given array is
1 bit in 0x01, 5 in 0xF4, 2 in 0x10001, so the total is 1 + 5 + 2 = 8 bits

- Arrays
- Loops
- Bitwise Operators

*/

#include <stdio.h>
#include <stdlib.h>

int countSetBits(int num)
{
   int count = 0;

   while (num != 0)
   {
      count += num & 1; // Add the rightmost bit to the count if it's set
      num >>= 1;        // Right shift the number by 1 bit
   }

   return count;
}

int main()
{
   int size;
   printf("Enter the size of the array: ");
   scanf("%d", &size);

   unsigned int *a = (unsigned int *)malloc(size * sizeof(unsigned int));

   if (a == NULL)
   {
      printf("Memory allocation failed. Exiting the program.\n");
      return 1;
   }

   printf("Enter the elements of the array in hexadecimal format:\n");

   for (int i = 0; i < size; i++)
   {
      printf("Hexadecimal Element %d: ", i + 1);
      scanf("%x", &a[i]);
   }

   int totalBits = 0;

   for (int i = 0; i < size; i++)
   {
      totalBits += countSetBits(a[i]);
   }

   printf("Total number of set bits: %d\n", totalBits);

   free(a);

   return 0;
}
