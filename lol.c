#include<stdio.h>

int main()
{
float month[31],avg,sum=0,st;
int x,i,j;

printf("\nEnter no. of days in month: ");
scanf("%d",&x);
for(i=0;i<x;i++)
{
printf("\nEnter temperature: ");
scanf("%f",&month[i]);
}
for(i=0;i<x;i++)
{
sum+=month[i];
}
avg=sum/x;
for(i=0;i<x-1;i++)
{
for(j=0;j<x-i-1;j++)
{
if (month[j]>month[j+1])
{
st=month[j];
month[j]=month[j+1];
month[j+1]=st;
}
}
}
printf("\nThe average temperature of month is %4.2f",avg);
printf("\nThe hottest day of the month is %4.2f",month[x-1]);
printf("\nThe coldest day of the month is %4.2f",month[0]);
return 0;
}
