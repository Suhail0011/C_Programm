#include <stdio.h>
int main()
{
    int a=1;
    while(a < 20)
    {
        a++;
        if(a==15)
        {
            continue;
        }
        printf("%d \n", a);
    }
}