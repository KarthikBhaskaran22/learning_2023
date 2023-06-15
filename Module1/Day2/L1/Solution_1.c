/*
Task 1
Write a program to print exponent part of double variable in hexadecimal and binary format.
lets say we have x = 0.7, the exponent in hex is 0x3FE and 0b01111111110
You may use the below link to validate you output

https://baseconvert.com/ieee-754-floating-point

Topics to be covered
- Pointers
- Bitwise Operators

*/

#include <stdio.h>

void printExponent(double x)
{
   unsigned long long *ptr = (unsigned long long *)&x;

   unsigned long long exponent = (*ptr >> 52) & 0x7FF;

   // Convert exponent to hexa and binary
   char hexExponent[4];
   sprintf(hexExponent, "%llX", exponent);

   char binaryExponent[12];
   int i;
   for (i = 0; i < 11; i++)
   {
      binaryExponent[i] = ((exponent >> (10 - i)) & 1) + '0';
   }
   binaryExponent[11] = '\0';

   printf("Hexadecimal exponent: 0x%s\n", hexExponent);
   printf("Binary exponent: 0b%s\n", binaryExponent);
}

int main()
{
   double x;
   printf("Enter a double value: ");
   scanf("%lf", &x);

   printExponent(x);

   return 0;
}
