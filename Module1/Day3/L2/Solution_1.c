/*
Task 1
Bit Operations:
https://1.bp.blogspot.com/-Tfj_D_f_AF0/VZO5QIIGAUI/AAAAAAAAAmI/5Rw6uIU3EiI/s1600/DS1307%2BTime%2BKeeper%2BRegister.PNG

DS1307 has its time registers in BCD format as shown in the image found in the above link, so
a. Write a function to Set, clear and toggle bit of an 8-bit number

Concepts to be used.
- Operators

*/

#include <stdio.h>

// set
unsigned char setBit(unsigned char num, int position)
{
   return (num | (1 << position));
}

// clear
unsigned char clearBit(unsigned char num, int position)
{
   return (num & ~(1 << position));
}

// toggle
unsigned char toggleBit(unsigned char num, int position)
{
   return (num ^ (1 << position));
}

int main()
{
   unsigned char num;
   int position;

   printf("Enter an 8-bit number in hexadecimal (e.g., 0x2A): ");
   scanf("%hhx", &num);

   printf("Enter the bit position (0-7) to set/clear/toggle: ");
   scanf("%d", &position);

   // Set
   unsigned char setResult = setBit(num, position);
   printf("Set bit result: 0x%02X\n", setResult);

   // Clear
   unsigned char clearResult = clearBit(num, position);
   printf("Clear bit result: 0x%02X\n", clearResult);

   // Toggle
   unsigned char toggleResult = toggleBit(num, position);
   printf("Toggle bit result: 0x%02X\n", toggleResult);

   return 0;
}
