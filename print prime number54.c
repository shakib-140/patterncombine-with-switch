#include<stdio.h>
#include<conio.h>
int n,i,j,result,count=0;
int main()
{
    printf("enter the value of n=");
    scanf("%d",&n);


    for(i=2; i<=n; i++)
    {
        for(j=2; j<=i; j++)
        {
            if(i%j==0)
            {

                break;
            }

        }


        if(i==j)
        {
            printf("%d : is a prime number\n",i);
        }

    }









    getch();
}