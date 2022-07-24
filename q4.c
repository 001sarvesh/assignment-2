// WAP to swap values of two int variables without using third variables. 
 #include <stdio.h>
int main()
{
    int a = 45;
    int b = 34;
    a = a * b;
    b = a / b;
    a = a / b;
     printf("After swapping a  = %d , b = %d" , a,b);
     return 0;
}