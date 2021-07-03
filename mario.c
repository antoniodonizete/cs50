#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get positive integer from user
    int n;
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);
    
    // Print out that many question marks
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
        printf("#");
        }
        printf("\n");
    }    
    
 }