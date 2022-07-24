// WAP to print size of an int , a float, a char and a double type variable
#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;

    printf("size of int : %dbytes\n" ,sizeof(a) );
    printf("size of float : %ldbytes\n" ,sizeof(b) );
    printf("size of char : %ldbytes\n" ,sizeof(c) );
    printf("size of double : %ldbytes\n", sizeof(d) );

    return 0;
}