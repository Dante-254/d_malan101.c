#include <stdio.h>

int main() {
    int number, temp, digit;

    // Get the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Remove the last digit (to start from the second-to-last)
    temp = number / 10;

    // Loop to check each digit starting from the second-to-last
    while (temp > 0) {
        digit = temp % 10;  // Extract the current last digit
        printf("Digit: %d\n", digit);  // Print or process the digit

        temp = temp / 100;  // Remove the last digit
    }

    return 0;
}
