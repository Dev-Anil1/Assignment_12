#include<stdio.h>
#include<conio.h>
void printoddN(int );
int main()
{
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printoddN(n);
    getch();
    return 0;
}

void printoddN(int n)
{
    if(n)
    {
        printf("%d ",2*n-1);
        printoddN(n-1);
    }
}


