#include <stdio.h>
int main()
{
    int i=0, j=1, k, n;
    printf("Enter a number: ");   //enter the limit of fabonic secrice 
    scanf("%d", &n);

    printf("%d %d", i, j);
    k = i + j;
    while (k<=n)    
    {
        printf("%d", k);
        i=j;            //here i = 1 before line 15 (ie k=i+j) is excuted
        j=k;            //here j = 1 before line 15 (ie k=i+j) is excuted
        k=i+j;
    }
    return 0;
}