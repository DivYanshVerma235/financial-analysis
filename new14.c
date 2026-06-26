#include<stdio.h>
int main()
{
    int num,choice,i,j;
    printf("\n enter 1 for evaluating factorial of number:");
    printf("\n enter 2 for evaluating fabonicci sum of given n terms:");
    printf("\n enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\n enter the number:");
            scanf("%d",&num);
            for (j=1,i=1;i<=num;i++)
            {
                j=j*i;
            }
                printf("\n factorial of %d is %d:",num,j);
                break;
        case 2:
            printf("\n enter the number of trems:");
            scanf("%d",&num);
            for (j=0,i=1;i<=num;i++)
            {
                j=j+i;
            }
                printf("\n fabonicci sum of %d terms is %d:",num,j);
                break;
        default:
            printf("\n invalid choice:");
    }  
  return 0;      
            
}