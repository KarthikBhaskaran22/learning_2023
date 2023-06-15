/*
Task 5
Write a function to accept an integer (32 bits) and operation type to do the following and return the result to main function.
    - Set 1st bit, if operation type is 1
    - Clear 31st bit, if operation type is 2
    - Toggle 16th bit, if operation type is 3
   You can consider the below function prototype,
    - bit_operations(int num, int oper_type);
*/

#include <stdio.h>

int bit_operations(int num, int operator_type)
{
   if (operator_type == 1)
   { // Set 1st bit
      num |= 1;
   }
   else if (operator_type == 2)
   {                       // Clear 31st bit
      num &= (~(1 << 31)); // Give a negative value
   }
   else if (operator_type == 3)
   { // Toggle 16th bit
      num ^= 1 << 16;
   }

   return num;
}

int main()
{
   int num, operator_type, result;
   printf("Enter an integer (32 bits): ");
   scanf("%d", &num);

   printf("Enter operation type (1, 2, or 3): ");
   scanf("%d", &operator_type);

   result = bit_operations(num, operator_type);
   printf("Result: %d\n", result);

   return 0;
}
