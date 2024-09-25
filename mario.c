#include <stdio.h>
#include <cs50.h>

int main() {
    int i, j, k;
    int rows = 7; // Number of rows for the pyramid

    for (i = 1; i <= rows; i++) {
        // Print spaces before the hash symbols
        for (j = i; j < rows; j++) {
            printf(" ");
        }
        // Print left half of the hashes
        for (k = 1; k <= i; k++) {
            printf("#");
        }
        // Print right half of the hashes
        for (k = 1; k <= i; k++) {
            printf("#");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}



// int main(void)
// {
//     int n;
//     do
//     {
//         n = get_int("Size :");
//     } while (n < 1);

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
    
    
// }