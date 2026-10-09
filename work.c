#include <stdio.h>
#include <string.h>

//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

int main() {
    char str[50];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str) - 1, stdin);

    // Count characters until null terminator
    while (str[count] != '\0') {
        count++;
    }

    printf("Number of characters: %d\n", count - 1); // Subtract 1 to exclude the newline character from fgets
    return 0;
}



//Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

int main() {
    char str[50];

    printf("Enter a string: ");
    fgets(str, sizeof(str) - 1, stdin);

    // Print each character on a new line
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') { // Exclude the newline character
            printf("%c\n", str[i]);
        }
    }

    return 0;
}