#include <stdio.h>

int _bit_operation(int num, int oper_type, int pos) {
    if (oper_type == 1) {  // Set 2 bits from nth bit position
        int mask = (1 << 2) - 1;  // Create a mask of 2 bits (0b11)
        mask <<= pos;  // Shift the mask to the nth bit position
        num |= mask;  // Set the corresponding bits in num
    }
    else if (oper_type == 2) {  // Clear 3 bits from nth bit position
        int mask = (1 << 3) - 1;  // Create a mask of 3 bits (0b111)
        mask <<= pos;  // Shift the mask to the nth bit position
        mask = ~mask;  // Invert the mask
        num &= mask;  // Clear the corresponding bits in num
    }
    else if (oper_type == 3) {  // Toggle MSB
        num ^= (1 << 31);  // Toggle the most significant bit (MSB)
    }

    return num;
}

int main() {
    int num = 123;  // Example input
    int oper_type = 1;  // Example operation type
    int pos = 5;  // Example bit position

    int result = _bit_operation(num, oper_type, pos);
    printf("Result: %d\n", result);

    return 0;
}
