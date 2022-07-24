// WAP to input a three digit number and display the sum of the digits.
#include <stdio.h>
int main()
{
    int num ,sum = 0;
    printf("Enter the three digit number\n");
    scanf("%d", &num);
    while (num!=0)
    {
        sum+= num%10;
        num = num/10;
    }
    printf("The sum of the digit is %d ", sum);

    return 0;
}