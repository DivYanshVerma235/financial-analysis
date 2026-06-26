#include<stdio.h>
long int pow1(int a, int b)
{
    int i;
    long int c=1;
    for (i=1;i<=b;i++)
    {
        c=c*a;
    }
    return c;
}
int main()
{
    int a,b;
    printf("\n enter the base:");
    scanf("%d",&a);
    printf("\n enter the power:");
    scanf("%d",&b);
    printf("\n the result is:%ld",pow1(a,b));
    return 0;
}