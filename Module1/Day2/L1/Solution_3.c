/*
Task 3
Write a program to sum every alternate elements of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be 10 + 30 + 50 = 90

Topics to be covered
- Arrays
- Loops
- Basic Operators

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* a = (int*)malloc(size * sizeof(int));

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }

    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += a[i];
    }

    printf("Sum of alternate elements: %d\n", sum);

    free(a);

    return 0;
}
