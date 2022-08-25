#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter Number: ");
    scanf("%d",&n);
    int i=1;
    do
    {
        fact = fact*i;
        i++;
    } while (i<=n);
    
    printf("Factorial is %d",fact);
    return 0;
}