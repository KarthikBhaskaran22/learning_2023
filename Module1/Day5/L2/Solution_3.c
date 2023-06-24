/*Task 3
Implement structures to read, write and compute average- marks and the students scoring above
and below the average marks for a class of N students.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure
struct Student
{
   char name[100];
   int marks;
};

// Function definition
void print_above_below_average(struct Student students[], int count, float avg_marks)
{
   printf("Students above average marks:\n");
   for (int i = 0; i < count; i++)
   {
      if (students[i].marks > avg_marks)
      {
         printf("%s - %d\n", students[i].name, students[i].marks);
      }
   }

   printf("Students below average marks:\n");
   for (int i = 0; i < count; i++)
   {
      if (students[i].marks < avg_marks)
      {
         printf("%s - %d\n", students[i].name, students[i].marks);
      }
   }
}

// Function definition
float compute_average(struct Student students[], int count)
{
   int total_marks = 0;
   for (int i = 0; i < count; i++)
   {
      total_marks += students[i].marks;
   }
   return (float)total_marks / count;
}

int main()
{
   int num_students;
   // Read user data
   printf("Enter the number of students: ");
   scanf("%d", &num_students);

   struct Student *students = malloc(num_students * sizeof(struct Student));

   // Read user data
   for (int i = 0; i < num_students; i++)
   {
      printf("Enter the name of student %d: ", i + 1);
      scanf(" %[^\n]", students[i].name);

      printf("Enter the marks of student %d: ", i + 1);
      scanf("%d", &students[i].marks);
   }

   // Function call to compute average marks
   float avg_marks = compute_average(students, num_students);
   printf("Average Marks: %.2f\n", avg_marks);

   // Function call to print the results
   print_above_below_average(students, num_students, avg_marks);

   free(students);

   return 0;
}


/*

Sample Output

Enter the number of students: 5

Enter the name of student 1: abc a
Enter the marks of student 1: 89

Enter the name of student 2: def d
Enter the marks of student 2: 75

Enter the name of student 3: abc def
Enter the marks of student 3: 35

Enter the name of student 4: xyz xyz
Enter the marks of student 4: 70

Enter the name of student 5: xyz def
Enter the marks of student 5: 45

Average Marks: 62.80

Students above average marks:
abc a - 89
def d - 75
xyz xyz - 70

Students below average marks:
abc def - 35
xyz def - 45

*/
