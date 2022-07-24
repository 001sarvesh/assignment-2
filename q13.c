// WAP to take three -digit number from the user and rotate its digits 
//  by one position towards right
#include <stdio.h>
int main(){
int x = 312,q,r;

q = x/10;
r =  x%10;

x = r*100+q;
printf("%d\n", x);
return 0 ;
}