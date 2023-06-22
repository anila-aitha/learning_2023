#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

void readComplex(struct Complex* num);
void writeComplex(struct Complex num);
struct Complex addComplex(struct Complex num1, struct Complex num2);
struct Complex multiplyComplex(struct Complex num1, struct Complex num2);

int main() {
    struct Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("\nEnter the second complex number:\n");
    readComplex(&num2);

    printf("\nThe first complex number is: ");
    writeComplex(num1);

    printf("The second complex number is: ");
    writeComplex(num2);

    sum = addComplex(num1, num2);
    printf("\nThe sum of the complex numbers is: ");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("The product of the complex numbers is: ");
    writeComplex(product);

    return 0;
}

void readComplex(struct Complex* num) {
    printf("Real part: ");
    scanf("%f", &(num->real));

    printf("Imaginary part: ");
    scanf("%f", &(num->imag));
}

void writeComplex(struct Complex num) {
    if (num.imag >= 0)
        printf("%.2f + %.2fi\n", num.real, num.imag);
    else
        printf("%.2f - %.2fi\n", num.real, -num.imag);
}

struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex sum;

    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    return sum;
}

struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex product;

    product.real = num1.real * num2.real - num1.imag * num2.imag;
    product.imag = num1.real * num2.imag + num1.imag * num2.real;

    return product;
}