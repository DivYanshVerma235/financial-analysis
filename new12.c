#include<stdio.h>
#include<string.h>
void main()
{
    char a[5][40],st[40],x[40],y[40];
    int choice,i,j,k;
    for (i=0;i<5;i++)
    {
        printf("\n enter any strings:");
        scanf("%s",a[i]);
    }
    printf("\n enter 1 for sorting string:");
    printf("\n enter 2 for finding the largest string;");
    printf("\n enter 3 for finding the shortest string :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
          for (i=0;i<5-1;i++)
          {
              for (j=0;j<5-i-1;j++)
              {
                  if (strcmp(a[j],a[j+1])>0)
                  {
                      strcpy(st,a[j]);
                      strcpy(a[j],a[j+1]);
                      strcpy(a[j+1],st);
                  }
              }
          }
          printf("\n the sorted strings are:");
            for (i=0;i<5;i++)
            {
                printf("\n%s",a[i]);
            }
            break;
        case 2:
            strcpy(x,a[0]);
            for (i=0;i<5;i++)
            {
                if (strlen(x)<strlen(a[i]))
                {
                    strcpy(x,a[i]);
                }
            }
            printf("\n the largest string is:%s",&x);
            break;
        case 3:
            strcpy(y,a[0]);
            for (i=0;i<5;i++)
            {
                if (strlen(y)>strlen(a[i]))
                {
                    ;strcpy(y,a[i]);
                }
            }
            printf("\n the smallest string is:%s",&y);
            break;
        default:
        printf("|n ivalid input");

    }
getchar();
}