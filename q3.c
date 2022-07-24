// WAP to swap values of two int variables
// #include <stdio.h>
// int main()
// {
//     int a = 45;
//     int b = 34;
//     a = a * b;
//     b = a / b;
//     a = a / b;
//     printf("After swapping a  = %d , b = %d" , a,b);
//     return 0;
// }

// WAP to swap values of two int variables using third variables

#include <stdio.h>
int main()
{
    int a , b , sarvesh ;
    printf("Enter the values of a and b \n");
    scanf("%d %d", &a, &b);
    sarvesh = a;
    a = b;
    b = sarvesh;
    printf("values of a and b after swapping a = %d and b = %d", a,b);
    return 0;
}