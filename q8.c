// WAP to check whether a given numberis even or odd using bitwise 
// operator
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number whose you want to check even or odd\n");
    scanf("%d" , &num);
    if (num%2 == 0)
    {
        printf("The number is even number ");
    }
    else{
        printf("The number is odd number");
    }
    return 0;
}