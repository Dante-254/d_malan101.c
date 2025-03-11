#include "cs50.h"
#include <stdio.h>
#include <string.h>



int main(int argc, string argv[])
{
    // string text = get_string("Input: ");
    string text = argv[1];
    for(int i = 1; i<strlen(text); i++)
    {
        if(text[i] < text[i-1])
        {
            printf("No\n");
        }
    
    }
}
