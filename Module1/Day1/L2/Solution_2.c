/*
Task 2
Write a function to return the grade of the given student using switch case statements
90 to 100 -> 'A'
75 to 89 -> 'B'
60 to 74 -> 'C'
50 to 59 -> 'D'
36 to 49 -> 'E'
0 to 35 -> 'F'

In main check the return value and print the below
65 -> "Grade A"
66 -> "Grade B"
67 -> "Grade C"
68 -> "Grade D"
69 -> "Grade E"
70 -> "Grade F"

*/

#include <stdio.h>

char getGrade(int score)
{
   if (score >= 90 && score <= 100)
      return 'A';

   else if (score >= 75 && score <= 89)
      return 'B';

   else if (score >= 60 && score <= 74)
      return 'C';

   else if (score >= 50 && score <= 59)
      return 'D';

   else if (score >= 36 && score <= 49)
      return 'E';

   else if (score >= 0 && score <= 35)
      return 'F';

   else
      return 'N'; // Invalid score
}

int main()
{
   int score;
   printf("Enter the score: ");
   scanf("%d", &score);

   char grade = getGrade(score);

   printf("Grade ");

   switch (grade)
   {
   case 'A':
      printf("A\n");
      break;

   case 'B':
      printf("B\n");
      break;

   case 'C':
      printf("C\n");
      break;

   case 'D':
      printf("D\n");
      break;

   case 'E':
      printf("E\n");
      break;

   case 'F':
      printf("F\n");
      break;

   default:
      printf("Invalid score\n");
      break;
   }

   return 0;
}
