#include <stdio.h>
#include <stdlib.h>

long int factorial(int n);

int main(int argc, char** argv)
{
        int n = atoi(argv[1]);
        if(n >= 1)
        {
                printf("Factorial of %d = %ld\n", n, factorial(n));
        }

        else
        {
                printf("You have to enter the number over than 0.\n");
        }
}

long int factorial(int n)
{
        if (n >= 1)
                return n * factorial(n - 1);
        else
                return 1;
}

