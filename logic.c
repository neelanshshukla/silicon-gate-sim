#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Error: Missing arguments\n");
        return 1;
    }

    char *gate = argv[1];
    int a = atoi(argv[2]); 
    int b = atoi(argv[3]);
    int result = 0;

    if (strcmp(gate, "AND") == 0) {
        result = a & b;
    } else if (strcmp(gate, "OR") == 0) {
        result = a | b;
    } else if (strcmp(gate, "XOR") == 0) {
        result = a ^ b;
    } else if (strcmp(gate, "NAND") == 0) {
        result = !(a & b);
    } else {
        printf("Error: Unknown gate\n");
        return 1;
    }

    printf("%d", result);
    return 0;
}