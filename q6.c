// WAP which takes a character as an input and displays its ASCII code.
#include <stdio.h>
int main()
{
    printf("Enter the character whose ASCII Value you want : ");
    char c;
    scanf("%c",&c);
    printf("\n The ASCII value of the given character is : %d",c);
    return 0;
}