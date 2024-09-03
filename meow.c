#include <stdio.h>
#include <cs50.h>

void meow(int n);

int main(void)
{
    // int counter = 1;
    // while (counter <= 3)
    // {
    //     printf("meow %i\n", counter);
    //     counter ++;
    // }
        // printf("meow: %i \n", counter);
        meow(4);

}



void meow(int n)
{
    for(int counter = 0; counter < n; counter++)
    {
        printf("meow\n");
    }
}