#include <stdio.h>

int _isupper(char c);

int main() {
    char c;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &c);

    // Determine if the character is uppercase or not
    if (_isupper(c)) {
        printf("%c is an uppercase letter.\n", c);
    } else {
        printf("%c is not an uppercase letter.\n", c);
    }

    return 0;
}

int _isupper(char c) {
    // Check if the character is between 'A' and 'Z'
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}
