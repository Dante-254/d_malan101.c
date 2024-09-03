#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int scores[3];

    for(int i = 0; i < 3; i++)
    {
        scores[i]=get_int("Score: ");
    }

    float avg = ((scores[0] + scores[1] + scores[2])/3.0);

    printf("You Average: %f", avg);
}