// print first Natural numbers
#include<stdio.h>
int main()
{
    int j, i;
    printf("Enter a number: ");
    scanf("%d", &j);
    for(i=1; i<=j; i++)
    {
        printf("\n%d", i);
    }
}