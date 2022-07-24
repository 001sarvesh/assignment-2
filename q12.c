// Assume price of one USD is INR 76.23.WAP to take the amount in INR
// and convert it into USD.
#include <stdio.h>
int main()
{
    float r;
    printf("Enter your amount in rupees ");
    scanf("%f", &r);
    float usd = r/76.23;
    printf("%f", usd);
    return 0;
}