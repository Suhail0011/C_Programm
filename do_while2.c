#include<stdio.h>
int main()
{
    int i;
    
    do
    {
         printf("\n Entr a number (1 - 10): ");
         scanf("%d", &i);
        switch (i)
        {
        case 1:
            printf("\n Hellow you chouse 1");
            break;
        case 2:
            printf("\n Hellow you chouse 2");
            break;
        case 3:
            printf("\n Hellow you chouse 3");
            break;
        case 4:
            printf("\n Hellow you chouse 4");
            break;
        default:
            printf("\n Enter num in Range (1-5)");
            break;
        }
    } while (i<=10);   //with this if we input 5-10 it excutes again and again without any answer.
    return 0;
    
}