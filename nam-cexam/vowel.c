#include <stdio.h>

int main() {
    char sentence[1000];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    int j;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (j = 0; sentence[j] != '\0'; j++) {
        char ch = sentence[j];


        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        // Count vowels
        if (ch == 'a') a++;
        else if (ch == 'e') e++;
        else if (ch == 'i') i++;
        else if (ch == 'o') o++;
        else if (ch == 'u') u++;
    }

    // Print the result with a message
    printf("\nHere are the vowel counts in your sentence:\n");
    printf("Number of 'a': %d\n", a);
    printf("Number of 'e': %d\n", e);
    printf("Number of 'i': %d\n", i);
    printf("Number of 'o': %d\n", o);
    printf("Number of 'u': %d\n", u);

    return 0;
}

