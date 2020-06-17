#include<stdio.h>
int main()
{
int i,n;
n=5;
unsigned fact=1;
if(n<0)
{
printf("Error");
}
else
{
for(i=1;i<n;i++)
{
fact=fact*i;
}
printf("%lu",fact);
}
return 0;
}
