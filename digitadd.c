#include <stdio.h>

int main() {
    int list[] = {2, 12, 8, 0, 0}; // The list of numbers
    int size = sizeof(list) / sizeof(list[0]); // Calculate the number of elements in the list
    int sum = 0;

    // Loop through each number in the list
    for (int i = 0; i < size; i++) {
        int number = list[i];

        printf("Processing number: %d\n", number); // Print the current number

        // Loop through each digit of the current number
        while (number > 0) {
            int digit = number % 10;  // Extract the last digit
            printf("  Extracted digit: %d\n", digit); // Print the extracted digit
            sum += digit;  // Add the digit to the sum
            printf("  Current sum: %d\n", sum); // Print the running sum
            number /= 10;  // Remove the last digit
        }

        printf("\n");  // Print a newline for better readability between numbers
    }

    // Final result
    printf("Final sum of all digits: %d\n", sum);

    return 0;
}
