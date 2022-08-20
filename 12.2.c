#include<stdio.h>
#include<conio.h>
void printN(int );
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printN(n);
    getch();
    return 0;
}

void printN(int n)
{
    if(n)
    {
        printf("%d ",n);
        printN(n-1);
    }
}
