/*
Task 1
BCD to Decimal:
https://1.bp.blogspot.com/-Tfj_D_f_AF0/VZO5QIIGAUI/AAAAAAAAAmI/5Rw6uIU3EiI/s1600/DS1307%2BTime%2BKeeper%2BRegister.PNG

DS1307 has its time registers in BCD format as shown in the image found in the above link, To set the time we need to convert the decimal number to BCD format, hence, write a fucntion to convert decimal to BCD

Concepts to be used.
- Operators
- Preprocessor

*/

#include <stdio.h>

#define DEC_TO_BCD(num) (((num / 10) << 4) | (num % 10))

void decimalToBCD(int decimal, int *bcdHigh, int *bcdLow)
{
   *bcdHigh = DEC_TO_BCD(decimal / 100);
   *bcdLow = DEC_TO_BCD(decimal % 100);
}

int main()
{
   int decimalNumber;
   printf("Enter a decimal number: ");
   scanf("%d", &decimalNumber);

   int bcdHigh, bcdLow;
   decimalToBCD(decimalNumber, &bcdHigh, &bcdLow);
   printf("Decimal: %d\nBCD High: %02X\nBCD Low: %02X\n", decimalNumber, bcdHigh, bcdLow);

   return 0;
}
