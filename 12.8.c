#include<stdio.h>
#include<conio.h>
void decimaTobinary(int);
void decimalTobinary(int n)
{
    if(n==0)
        return;
    decimalTobinary(n>>1);
    printf("%d",n&1);
}

int main()
{
    int n;
    printf("Enter a number to convert in binary=");
    scanf("%d",&n);
    decimalTobinary(n);
    return 0;
}
