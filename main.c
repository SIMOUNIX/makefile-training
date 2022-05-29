#include <stdio.h>
#include <stdlib.h>

#include "src/basics_c.h"

int main()
{
    printf("Welcome in this bassis program made to train Makefile!\n");
    printf("\n");
    for(;;)
    {
        printf("Please choose what you want to do: \n");
        printf("1. Fibonacci\n");
        printf("2. Factorial\n");
        printf("3. Perfect number\n");
        printf("4. Exit the programm\n");

        int ans;
        scanf("%d", &ans);

        if(ans < 1 || ans > 4)
            continue;
        else
        {
            int n;
            unsigned long long int res;
            switch(ans)
            {
                case 1:
                    printf("Enter an integer: ");
                    scanf("%d", &n);
                    res = fibonacci(n);
                    printf("Fibonacci of %d is: %llu\n", n, res);
                    printf("\n");
                    break;

                case 2:
                    printf("Enter an integer: ");
                    scanf("%d", &n);
                    res = factorial(n);
                    printf("Factorial of %d is: %llu\n", n, res);
                    printf("\n");
                    break;
                case 3:
                    printf("Enter an integer: ");
                    scanf("%d", &n);
                    res = perfectNumber(n);
                    if(res == 1)
                        printf("%d is a perfect number!\n", n);
                    else
                        printf("%d is not a perfect number!\n", n);
                    printf("\n");
                    break;
                case 4:
                    exit(1);
            }
        }
    }

    return EXIT_SUCCESS;
}