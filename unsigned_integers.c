#include <stdio.h>

int main(void)
{
    unsigned char x = 250;
    printf("int : %d\n", x);
    for (int i=0; i <= 10; i++)
    { 
        x += 1;
        printf("%d int : %d\n", i,x);
    }
    
}