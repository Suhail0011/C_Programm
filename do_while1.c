#include <stdio.h>
int main()
{ 
    int age;
    char name[50], address[50], ad;

    do{
    printf("Enter Name: ");
    scanf("%s", name);
    printf("\n Enter Address: ");
    scanf("%s", address);
    printf("Enter Age: ");
    scanf("%d", &age);

    printf("\n %s", name);
    printf("\n %s", address);
    printf("\n %d", age);

    printf("\n Enter new details (y/n): ");
    scanf("%s",&ad);
    }while(ad=='y');

}