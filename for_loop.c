#include <stdio.h>
int main()
{
    int j, i;
    printf("Entr a number: ");
    scanf("%d", &j);
    for(i=0;i<j;i++)
    {
        printf("%d \n",i);
    }
}