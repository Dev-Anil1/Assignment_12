#include<stdio.h>
void reverse(int);
void reverse(int n)
{
    if(n==0)
        return;
    printf("%d",n%10);
    reverse(n/10);
}

int main()
{
    int x;
    printf("Enter a number to reverse");
    scanf("%d",&x);
    reverse(x);
    return 0;
}
