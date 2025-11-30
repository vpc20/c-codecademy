#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumber(int a, int b) {
    int randomNumber = a + rand() % (b - a + 1);
    return randomNumber;
}

// Function to generate a random lowercase letter (a-z)
char randomLowercase() {
    return 'a' + (rand() % 26);
    // return (char)(97 + (rand() % 26));
}

// Function to generate a random uppercase letter (A-Z)
char randomUppercase() {
    return 'A' + (rand() % 26);
}

// Function to generate a random digit (0-9)
char randomDigit() {
    return '0' + (rand() % 10);
}

// Function to generate any random printable ASCII character
char randomPrintable() {
    return 33 + (rand() % 94); // ASCII 33-126
}

// Function to generate random alphanumeric character
char randomAlphanumeric() {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    return charset[rand() % 62];
}

char *randomStringLower(int maxlen) {
    char *random_str = (char *) malloc(maxlen + 1);
    int i;
    int random_len = rand() % (maxlen + 1);
    printf("%d\n", random_len);
    for (i = 0; i < random_len; ++i) {
        random_str[i] = randomLowercase();
    }
    if (i == 0) // do not return null string
        random_str[i] = randomLowercase();
    random_str[++i] = '\0'; // null terminator for string
    return random_str;
}

void main() {
    srand(time(NULL));
    printf("getRandomNumber\n");
    printf("%d\n", getRandomNumber(1, 5));

    printf("Random Character Generator\n");
    printf("================================================\n");

    // Generate 10 random lowercase letters
    printf("10 Random lowercase letters: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", randomLowercase());
    }
    printf("\n");

    // Generate 10 random uppercase letters
    printf("10 Random uppercase letters: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", randomUppercase());
    }
    printf("\n");

    // Generate 10 random digits
    printf("10 Random digits: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", randomDigit());
    }
    printf("\n");

    // Generate 10 random alphanumeric characters
    printf("10 Random alphanumeric: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", randomAlphanumeric());
    }
    printf("\n");

    // Generate 10 random printable ASCII characters
    printf("10 Random printable ASCII: ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", randomPrintable());
    }
    printf("\n");

    printf("%s", randomStringLower(10));
}
