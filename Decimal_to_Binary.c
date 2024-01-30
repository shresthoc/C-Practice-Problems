#include <stdio.h>

void decimalToBinary(double num, int n) {
    // Handling whether the number is positive or negative by printing the first number as 0 or 1 respectively
    if (num < 0) {
        printf("1");
        num = -num;
    } else {
        printf("0");
    }

    // Separate the integer and fractional parts
    int intPart = (int)num;
    double fracPart = num - intPart;

    // Convert the integer part to binary
    int binaryInt[32]; // Assuming a maximum of 32-bit binary representation
    int i = 0;
    while (intPart > 0) {
        binaryInt[i] = intPart % 2;
        intPart = intPart / 2;
        i++;
    }

    // Print the binary integer part in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryInt[j]);
    }

    // Print the decimal point
    printf(".");

    // Convert the fractional part to binary
    while (n--) {
        // Multiply the fractional part by 2
        fracPart *= 2;

        // If the result is greater than or equal to 1, append 1 to the binary representation and subtract 1
        if (fracPart >= 1) {
            printf("1");
            fracPart -= 1;
        } else {
            printf("0");
        }
    }
}

int main() {
    double decimalNumber;
    int n;

    // Input the decimal number
    printf("Enter a decimal number: ");
    scanf("%lf", &decimalNumber);

    // Input the number of bits for the binary representation
    printf("Enter the number of bits for the binary representation: ");
    scanf("%d", &n);

    // Convert the decimal number to binary
    printf("Binary representation: ");
    decimalToBinary(decimalNumber, n);

    return 0;
}
