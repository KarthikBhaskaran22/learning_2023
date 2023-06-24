/*
Task 4
Write a program to pass a pointer to a structure as a parameter to a function and return back a pointer to structure
to the calling function after modifying the members of structure.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure
typedef struct
{
   int rollNo;
   char name[50];
   int age;
} Student;

// Function definition
void getStudentDetails(Student *student)
{
   printf("Enter Roll Number: ");
   scanf("%d", &(student->rollNo));

   printf("Enter Name: ");
   scanf(" %[^\n]s", student->name);

   printf("Enter Age: ");
   scanf("%d", &(student->age));
}

// Function definition
void modifyStudentDetails(Student *student)
{
   printf("Enter Modified Name: ");
   scanf(" %[^\n]s", student->name);

   printf("Enter Modified Age: ");
   scanf("%d", &(student->age));
}

// Function definition
void printStudentDetails(const Student *student)
{
   printf("Roll Number: %d\n", student->rollNo);
   printf("Name: %s\n", student->name);
   printf("Age: %d\n", student->age);
   printf("\n");
}

int main()
{
   int numStudents;

   // Read user data
   printf("Enter the number of students: ");
   scanf("%d", &numStudents);

   // Allocate memory for the array of students
   Student *students = (Student *)malloc(numStudents * sizeof(Student));

   // Readb user input
   for (int i = 0; i < numStudents; i++)
   {
      printf("\nStudent %d:\n", i + 1);
      getStudentDetails(&students[i]);
   }

   // Modify details for a specific student
   int studentIndex;
   printf("Enter the index of the student to modify (0 to %d): ", numStudents - 1);
   scanf("%d", &studentIndex);

   if (studentIndex >= 0 && studentIndex < numStudents)
   {
      printf("\nModifying Student %d:\n", studentIndex + 1);
      modifyStudentDetails(&students[studentIndex]);
   }
   else
   {
      printf("Invalid student index entered.\n");
   }

   // Print the final modified student details
   printf("\nFinal Modified Student Details:\n");
   for (int i = 0; i < numStudents; i++)
   {
      printf("Student %d:\n", i + 1);
      printStudentDetails(&students[i]);
   }

   free(students);

   return 0;
}


/*

Sample output

Enter the number of students: 3

Student 1:
Enter Roll Number: 1
Enter Name: aaaa aaaaa aaaaa
Enter Age: 20

Student 2:
Enter Roll Number: 2
Enter Name: bbbb bbbbb
Enter Age: 20

Student 3:
Enter Roll Number: ccccc cccc dddd
Enter Name: Enter Age: 20
Enter the index of the student to modify (0 to 2): 2

Modifying Student 3:
Enter Modified Name: cccc cccc ccccc
Enter Modified Age: 20

Final Modified Student Details:
Student 1:
Roll Number: 1
Name: aaaa aaaaa aaaaa
Age: 20

Student 2:
Roll Number: 2
Name: bbbb bbbbb
Age: 20

Student 3:
Roll Number: 0
Name: cccc cccc ccccc
Age: 20

*/
