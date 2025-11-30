//
// Created by vpc on 11/28/25.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BYTES_PER_LINE 16

void print_hex_dump(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        fprintf(stderr, "Error: Cannot open file '%s'\n", filename);
        return;
    }

    unsigned char buffer[BYTES_PER_LINE];
    size_t bytes_read;
    size_t offset = 0;

    printf("Offset(h) ");
    for (int i = 0; i < BYTES_PER_LINE; i++) {
        printf("%02X ", i);
    }
    printf(" ASCII\n");
    printf("--------- ");
    for (int i = 0; i < BYTES_PER_LINE; i++) {
        printf("---");
    }
    printf(" ----------------\n");

    while ((bytes_read = fread(buffer, 1, BYTES_PER_LINE, file)) > 0) {
        // Print offset
        printf("%08zX  ", offset);

        // Print hex values
        for (size_t i = 0; i < BYTES_PER_LINE; i++) {
            if (i < bytes_read) {
                printf("%02X ", buffer[i]);
            } else {
                printf("   ");
            }
        }

        printf(" ");

        // Print ASCII representation
        for (size_t i = 0; i < bytes_read; i++) {
            if (isprint(buffer[i])) {
                printf("%c", buffer[i]);
            } else {
                printf(".");
            }
        }

        printf("\n");
        offset += bytes_read;
    }

    printf("\nTotal bytes: %zu\n", offset);
    fclose(file);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        printf("Example: %s data.bin\n", argv[0]);
        return 1;
    }

    print_hex_dump(argv[1]);
    return 0;
}