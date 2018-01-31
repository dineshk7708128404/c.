#include <stdio.h>
#include<conio.h>
int main()
{
    int n, i=2, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}
