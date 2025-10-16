#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;  // Number of rows

    for (i = 1; i <= rows; i++) {
    
        for (j = 1; j <= rows - i; j++) {
            printf("_ ");
        }

        // Print stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        
        printf("\n");
    }

    return 0;
}
