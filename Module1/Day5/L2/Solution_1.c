/*
Task 1
Write a program to demonstrate the swapping the fields of two structures using pointers

*/

#include <stdio.h>
#include <string.h>

// Structure definition
struct Student
{
   char name[50];
   float GPA;
};

// Swap the fields of two structures
void swap(struct Student *s1, struct Student *s2)
{
   struct Student temp;
   strcpy(temp.name, s1->name);
   temp.GPA = s1->GPA;

   strcpy(s1->name, s2->name);
   s1->GPA = s2->GPA;

   strcpy(s2->name, temp.name);
   s2->GPA = temp.GPA;
}

int main()
{
   // Create two Student structures
   struct Student student1, student2;

   // Read student1 data
   printf("Enter details of student1:\n");
   printf("Name: ");
   fgets(student1.name, sizeof(student1.name), stdin);
   student1.name[strcspn(student1.name, "\n")] = '\0'; // Remove newline character
   printf("GPA: ");
   scanf("%f", &student1.GPA);
   getchar(); // Clearing the newline character from input buffer

   // Read student 2 data
   printf("\nEnter details of student2:\n");
   printf("Name: ");
   fgets(student2.name, sizeof(student2.name), stdin);
   student2.name[strcspn(student2.name, "\n")] = '\0';
   printf("GPA: ");
   scanf("%f", &student2.GPA);

   // Print the initial details
   printf("\nInitial details:\n");
   printf("Student1: Name = %s, GPA = %.2f\n", student1.name, student1.GPA);
   printf("Student2: Name = %s, GPA = %.2f\n", student2.name, student2.GPA);

   // Swapping students
   swap(&student1, &student2);

   // Print the swapped details
   printf("\nAfter swapping:\n");
   printf("Student1: Name = %s, GPA = %.2f\n", student1.name, student1.GPA);
   printf("Student2: Name = %s, GPA = %.2f\n", student2.name, student2.GPA);

   return 0;
}


/*

Sample output

Enter details of student1:
Name: Karthik Bhaskaran
GPA: 8.16

Enter details of student2:
Name: abc xyz
GPA: 9.9

Initial details:
Student1: Name = Karthik Bhaskaran, GPA = 8.16
Student2: Name = abc xyz, GPA = 9.90

After swapping:
Student1: Name = abc xyz, GPA = 9.90
Student2: Name = Karthik Bhaskaran, GPA = 8.16

*/