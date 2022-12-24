#include<stdio.h>
int main()
{
    int n,i,temp=1;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n>0)
        {
            if(n%i==0)
            {
                temp=0;
                break;
            }
        }
    }
    if (n <= 1)
        temp = 0;
  
    if (temp == 1) {
        printf("%d is a prime number", n);
    }
    else {
        printf("%d is not a prime number", n);
    }
    
    return 0;
}