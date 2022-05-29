#include <stdio.h>
#include <stdlib.h>

#include "src/basics_c.h"

int main()
{
    printf("Welcome in this bassis program made to train Makefile!\n");
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
            switch(ans)
            {
                case 1:
                    printf("Enter an integer: ");
                    scanf("%d", &n);
                    unsigned long long int res = fibonacci(n);
                    printf("Answer is: %llu\n", res);
                    break;
                case 4:
                    exit(1);
            }
        }
    }

    return EXIT_SUCCESS;
}