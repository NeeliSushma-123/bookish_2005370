#include<stdio.h>
int main()
{
int n;
n=5;
unsigned fact=1;

for(int i=1;i<n;i++)
{
fact=fact*i;
}
printf("%u",fact);

return 0;
}
