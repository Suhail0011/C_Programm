#include <stdio.h>
int main()
{
    int i, j=0;
    printf("Enter a number: ");
    scanf("%d", &i);
    while (j<=i)    
    {
        printf("%d \n", j);
        j=j+2;
    }
    
}