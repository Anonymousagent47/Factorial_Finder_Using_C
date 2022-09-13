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

//TO DO IT IN FOR LOOP
for(int i=1;i<=n;i++){
fact *= i;
}

//To Do it in while loop

while(i<=n){
    fact*=i;
    i++;
}
