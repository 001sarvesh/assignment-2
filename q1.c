// write a program to print unit digit of a given number.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d", &num);
if (num%10)
{
    printf("The unit digit of the number is %d\n",num%10);

}
else{
    printf("The unit digit of the given number is 0\n");
}

    return 0;
}