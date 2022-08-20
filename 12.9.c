#include<stdio.h>
void decimalTooctal(int);
void decimalTooctal(int n)
{
    if(n==0)
        return;
    decimalTooctal(n/8);
    printf("%d",n%8);
}

int main()
{
    int a;
    printf("Enter a number to convert in octal ");
    scanf("%d",&a);
    decimalTooctal(a);
    return 0;
}
