#include <stdio.h>
#include <math.h>

// Function to check Armstrong number
int armstrong(int n)
{
    int original = n, temp = n;
    int digits = 0, rem;
    int sum = 0;

    while(temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, digits);
        n = n / 10;
    }

    if(original == sum)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("%d is an Armstrong Number.", num);
    else
        printf("%d is Not an Armstrong Number.", num);

    return 0;
}