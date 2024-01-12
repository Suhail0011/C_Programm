#include <stdio.h>
int main()
{
    int a=0;
    while (a < 20)
    {
        if (a == 14)
        {
            break;
        }
        printf("%d \n", a);
        a++; 
    }
}