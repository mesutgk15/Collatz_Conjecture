#include <stdio.h>
#include <cs50.h>

int number;
int step_counter = 0;
int calc_collatz (int n);

int main(void)
{
    do
    {
    number = get_int("Enter a Positive Number to Calculate 'Collatz Conjecture' Steps: ");
    }
    while (number <= 0);
    calc_collatz(number);
    
    return 0;
}

int calc_collatz (int n)
{
    if (number == 1)
    {
        printf("\n");
        printf("It took %i steps to get back to '1'\n", step_counter);
        return 0;
    }
    if (number % 2 == 0)
    {
        step_counter++;
        number = number / 2;
        if (number == 1)
            printf("%i ", number);
        else
            printf("%i >", number);
    }
    else
    {
        step_counter++;
        number = (number*3) + 1;
        printf("%i >", number);
    }
    calc_collatz(number);
    return 0;
}
