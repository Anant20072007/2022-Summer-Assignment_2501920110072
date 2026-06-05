#include <stdio.h>

int main()
{
    int num, temp, rem, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(num != 0)
    {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    if(temp == reverse)
        printf("%d is a Palindrome Number", temp);
    else
        printf("%d is not a Palindrome Number", temp);

    return 0;
}