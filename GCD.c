#include <stdio.h>

int GCD(int,int);

int main()
{
    int a,b;
    printf("Enter two positive integers:\n");
    scanf("%d %d",&a,&b);
    printf("GCD of %d and %d is %d.",a,b,GCD(a,b));
}

int GCD(int a,int b)
{
    if(b != 0)
    return GCD(b,a%b);
    else
    return a;
}
