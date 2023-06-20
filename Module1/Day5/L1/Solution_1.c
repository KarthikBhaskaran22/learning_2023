/*
Task 1
Use structures to find the volume and the total surface area of the box.
   You need to access the members of the structure with the help of a structure pointer:
    a. With the help of (*) asterisk or indirection operator and (.) dot operator.
    b. With the help of ( -> ) Arrow operator using pointer as well as dot representation.

*/

#include <stdio.h>

// Structure for the box
struct Box
{
   double length;
   double width;
   double height;
};

// Volume of the box
double volume(struct Box *box)
{
   return box->length * box->width * box->height;
}

// Total surface area of the box
double surfaceArea(struct Box *box)
{
   double length = box->length;
   double width = box->width;
   double height = box->height;

   return 2 * (length * width + length * height + width * height);
}

int main()
{
   // Create a box object
   struct Box myBox;

   // Read user input
   printf("Enter the dimensions of the box:\n");
   printf("Length: ");
   scanf("%lf", &myBox.length);
   printf("Width: ");
   scanf("%lf", &myBox.width);
   printf("Height: ");
   scanf("%lf", &myBox.height);

   // Pointer to the box object
   struct Box *boxPtr = &myBox;

   //  (*) and (.) operators
   printf("\nUsing (*) and (.) operators:\n");
   printf("Length: %.2f\n", (*boxPtr).length);
   printf("Width: %.2f\n", (*boxPtr).width);
   printf("Height: %.2f\n", (*boxPtr).height);
   printf("Volume: %.2f\n", volume(boxPtr));
   printf("Surface Area: %.2f\n", surfaceArea(boxPtr));

   // (->) operator
   printf("\nUsing (->) operator:\n");
   printf("Length: %.2f\n", boxPtr->length);
   printf("Width: %.2f\n", boxPtr->width);
   printf("Height: %.2f\n", boxPtr->height);
   printf("Volume: %.2f\n", volume(boxPtr));
   printf("Surface Area: %.2f\n", surfaceArea(boxPtr));

   return 0;
}


/*

Sample output

Enter the dimensions of the box:
Length: 5
Width: 3
Height: 4

Using (*) and (.) operators:
Length: 5.00
Width: 3.00
Height: 4.00
Volume: 60.00
Surface Area: 94.00

Using (->) operator:
Length: 5.00
Width: 3.00
Height: 4.00
Volume: 60.00
Surface Area: 94.00

*/