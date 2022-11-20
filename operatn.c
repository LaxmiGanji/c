#include<stdio.h>
int main()
{
    int a,b,option,operation;
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value b: ");
    scanf("%d",&b);
    printf("enter the option: ");
    scanf("%d",&option);
    switch (option)
    {
    case 1: operation=a+b;
    printf("%d",operation);
        break;
    case 2: operation=a-b;
    printf("%d",operation);
        break;
    case 3: operation=a*b;
    printf("%d",operation);
        break;
    case 4: operation=a/b;
    printf("%d",operation);
        break;
    
    default:
        break;
    }
}