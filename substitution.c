#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

// Function prototypes
bool validate_key(string key);
void encrypt_text(string plaintext, string key);

int main(int argc, char *argv[])
{
    // Check if exactly one argument is passed
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // Validate the key
    string key = argv[1];
    if (!validate_key(key))
    {
        printf("Invalid key. Key must contain 26 unique alphabetic characters.\n");
        return 1;
    }

    // Get plaintext input from the user
    string plaintext = get_string("plaintext: ");

    // Encrypt the plaintext
    printf("ciphertext: ");
    encrypt_text(plaintext, key);

    printf("\n");
    return 0;
}

// Function to validate the key
bool validate_key(string key)
{
    int length = strlen(key);

    // Check if the key is exactly 26 characters long
    if (length != 26)
    {
        return false;
    }

    // Array to track if each letter has been used
    bool seen[26] = { false };

    // Iterate over each character in the key
    for (int i = 0; i < length; i++)
    {
        // Ensure each character is alphabetic
        if (!isalpha(key[i]))
        {
            return false;
        }

        // Convert to lowercase for consistency
        int index = tolower(key[i]) - 'a';
        printf("%i %c", index, tolower(key[i]));

        // Ensure no character is repeated
        if (seen[index])
        {
            return false;
        }

        seen[index] = true;
    }

    return true;
}

// Function to encrypt the text
void encrypt_text(string plaintext, string key)
{
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        char c = plaintext[i];

        if (isalpha(c))
        {
            if (isupper(c))
            {
                // Map uppercase letters
                printf("%c", toupper(key[c - 'A']));
            }
            else if (islower(c))
            {
                // Map lowercase letters
                printf("%c", tolower(key[c - 'a']));
            }
        }
        else
        {
            // Non-alphabetical characters remain unchanged
            printf("%c", c);
        }
    }
}
