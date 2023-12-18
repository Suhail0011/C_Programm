// Table of a given number
#include<stdio.h>
int main()
{
    int i, j, k;
    printf("Show table of: ");
    scanf("%d",&j);
    for (i = 1; i <= 10; i++)
    {
        k=j*i;
        printf("\n %d x %d = %d", j, i, k);
    }
    return 0;
}