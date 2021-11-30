#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j,choice,sum=0;
    printf("choice 1=1+3+5+.....\n");
    printf("choice 2=1+4+7+.....\n");
    printf("enter your choice=");
    scanf("%d",&choice);
    //printf("enter the value of n=");
    //scanf("%d",&n);
    switch(choice)
    {
    case 1:

        printf("enter the value of n=");
        scanf("%d",&n);
        for(i=1; i<=(2*n-1); i=i+2)
        {
            sum=sum+i;


        }
        printf("%d",sum);

        break;

    case 2:

        printf("enter the value of n=");
        scanf("%d",&n);
        for(j=1; j<=(3*n-1); j=j+3)
        {
            sum=sum+j;

        }
        printf("%d",sum);
        break;
    default :
        printf("not valid choice");




    }

    getch();
}

