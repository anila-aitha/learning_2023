#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int countSetBitsInArray(int arr[], int size) {
    int total_count = 0;
    for (int i = 0; i < size; i++) {
        int element = arr[i];
        if (element >= 0) {
            total_count += countSetBits(element);
        } else {
            char* hex_str = (char*)malloc(11 * sizeof(char));  
            sprintf(hex_str, "%X", element);
            int hex_value = (int)strtol(hex_str, NULL, 16);
            total_count += countSetBits(hex_value);
            free(hex_str);
        }
    }
    return total_count;
}

int main() {
    int array[] = {15, 0xFF, 0b1101, 0xABC};
    int size = sizeof(array) / sizeof(array[0]);
    int bit_count = countSetBitsInArray(array, size);
    printf("Total number of set bits: %d\n", bit_count);

    return 0;
}
