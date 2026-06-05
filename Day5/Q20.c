#include <stdio.h>

int main()
{
    int num, i, j, largestPrime = 0, isPrime;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++)
        {
        if(num % i == 0)
        {
            isPrime = 1;

            for(j = 2; j <= i / 2; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime)
            {
                largestPrime = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}