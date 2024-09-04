#include <stdio.h>
#include <cs50.h>
#include <string.h>

int string_length(string s);
int main(void)
{
    int j = 0;
    while (j < 3)
    {
        string name = get_string("A word: ");
        // int length = string_length(name);
        int length = strlen(name);
        printf("Length is: %i \n", length);
        j++; 
    }
}

// int string_length(string s)
// {
    
//     int i = 0;
    
//         while (s[i] != '\0')
//         {
//             i++;
//         }
//     return i;
// }