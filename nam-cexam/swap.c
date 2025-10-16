#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    // Get input from user
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    
    printf("\nBefore swapping: x = %d, y = %d\n", x, y);

    // swap function
    swap(&x, &y);

    // Print after swapping
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}


