/*
Task 4
Write a program to Store Data for n students in Structures Dynamically.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store student information
typedef struct
{
   char name[50];
   int age;
   char courseName[50];
   float gpa;
} Student;

int main()
{
   int n, i;

   printf("Enter the number of students: ");
   scanf("%d", &n);
   getchar();

   // Dynamically allocate memory for an array of n students
   Student *students = (Student *)malloc(n * sizeof(Student));

   // Read data
   for (i = 0; i < n; i++)
   {
      printf("\nEnter details for student %d:\n", i + 1);

      printf("Name: ");
      fgets(students[i].name, sizeof(students[i].name), stdin);
      students[i].name[strcspn(students[i].name, "\n")] = '\0'; // remove the newline character

      printf("Age: ");
      scanf("%d", &students[i].age);
      getchar(); // consume the newline character

      printf("Course Name: ");
      fgets(students[i].courseName, sizeof(students[i].courseName), stdin);
      students[i].courseName[strcspn(students[i].courseName, "\n")] = '\0'; // remove the newline character

      printf("GPA: ");
      scanf("%f", &students[i].gpa);
      getchar();
   }

   // Display data for each student
   printf("\nStudent details:\n");
   for (i = 0; i < n; i++)
   {
      printf("\nDetails of student %d:\n", i + 1);
      printf("Name: %s\n", students[i].name);
      printf("Age: %d\n", students[i].age);
      printf("Course Name: %s\n", students[i].courseName);
      printf("GPA: %.2f\n", students[i].gpa);
   }

   // Free the dynamically allocated memory
   free(students);

   return 0;
}


/*

Sample output

Enter the number of students: 2

Enter details for student 1:
Name: Karthik Bhaskaran
Age: 23
Course Name: Electronics and Communications Engg
GPA: 8.16

Enter details for student 2:
Name: abc xyz
Age: 00
Course Name: def
GPA: 99


Student details:

Details of student 1:
Name: Karthik Bhaskaran
Age: 23
Course Name: Electronics and Communications Engg
GPA: 8.16

Details of student 2:
Name: abc xyz
Age: 0
Course Name: def
GPA: 99.00

*/