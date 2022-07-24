// WAP to find the position of first 1 in LSB.
#include <stdio.h>
int main()
{
    int x=4;
    int count = 0;
    int result = 0;

    while (x != 0)
    {
        result = x & 1;
        count++;
    
    if (result == 1)
    {
        printf("%d", count);
    break;
    }

    x = x >> 1;
}
    return 0;
}