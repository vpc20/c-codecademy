#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[256]; // Buffer for reading lines

    // Open the file in read mode
    fp = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (fp == NULL) {
        printf("Error: Could not open file example.txt\n");
        return 1; // Indicate an error
    }

    // Read and print the file content line by line
    printf("Content of example.txt:\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(fp);

    return 0; // Indicate successful execution
}
