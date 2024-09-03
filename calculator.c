#include <cs50.h>
#include <stdio.h>

int logic(int num_1, int num_2, char operator);

int main(void)
{
    int num_1;
    int num_2;
    char operator;

    num_1 = get_int("First Number: ");
    num_2 = get_int("Second Number: ");
    operator = get_char("Operator: ");

    int answ = logic(num_1, num_2, operator);

    printf("The Answer is: %i", answ);

}



int logic(int x, int y, char operator)
{
    int answ;
    if(operator == '+')
    {
        answ = x + y;
    }
    else if(operator == '-')
   {
        answ = x - y;
   }
   else if (operator == '*')
   {
    answ = x * y;
   }
   else
   {
    answ = x/y;
   }
    
}
