/*
Task 2
Write a program to enter to Cartesian coordinate points and display the distance between them.

*/

#include <stdio.h>
#include <math.h>

// Structure
struct Point
{
   float x;
   float y;
};

// Function definition
float calculateDistance(struct Point p1, struct Point p2)
{
   float distance;
   distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
   return distance;
}

int main()
{
   struct Point p1, p2;

   // Read user data
   printf("Enter coordinates for Point 1 (x y): ");
   scanf("%f %f", &p1.x, &p1.y);

   printf("Enter coordinates for Point 2 (x y): ");
   scanf("%f %f", &p2.x, &p2.y);

   // Function call
   float distance = calculateDistance(p1, p2);

   // Print the result
   printf("The distance between the two points is: %.2f\n", distance);

   return 0;
}


/*

Sample output

Enter coordinates for Point 1 (x y): 4 7
Enter coordinates for Point 2 (x y): 5 6 
The distance between the two points is: 1.41

Enter coordinates for Point 1 (x y): 2 3
Enter coordinates for Point 2 (x y): 5 7
The distance between the two points is: 5.00

Explanation
deltaX = 5 - 2 = 3
deltaY = 7 - 3 = 4
deltaXSquared = 3 * 3 = 9
deltaYSquared = 4 * 4 = 16
sumOfSquares = 9 + 16 = 25
distance = sqrt(25) = 5.00

*/