#include<stdio.h>

int main()
{
int choice,a[3][3],b[3][3],c[3][3],i,j,k;

printf("\nEnter the elements of first matrix:\n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("\nThe first matrix is:\n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
printf("\nEnter the elements of second matrix:\n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
scanf("%d",&b[i][j]);
}
printf("\nThe second matrix is:\n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
printf("%d\t",b[i][j]);
printf("\n");
}
printf("\nPress 1 for addition");
printf("\nPress 2 for subtraction");
printf("\nPress 3 for multiplication");
printf("\nEnter your choice: ");
scanf("%d",&choice);

switch(choice)
{
case 1:
printf("\nSum of entered matrices is:\n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
c[i][j]=0;
c[i][j]=a[i][j]+b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");
}
break;
case 2:
printf("\nDifference of entered matrices is:\n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
c[i][j]=0;
c[i][j]=a[i][j]-b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");
}
break;
case 3:
printf("\nProduct of entered matrices is:\n");
for (i=0;i<3;i++)
{
for (j=0;j<3;j++)
{
c[i][j]=0;
for (k=0;k<3;k++)
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
printf("%d\t",c[i][j]);
}
printf("\n");
}
break;
default:
printf("\nInvalid Entry");
break;
}
return 0;
}
