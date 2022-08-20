#include<stdio.h>
#include<conio.h>
void printSquare(int);
void printSquare (int n)
{
    if(n==0)
        return;
    printSquare(n-1);
    printf("%d ",n*n);
}

int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printSquare(n);
    getch();
    return 0;
}
