#include <stdio.h>
int main()
{
int lb,ub;
int i,j;
int flag;
printf("Enter the 1st number of the range: ");
scanf("%d",&lb);
printf("Enter the 2st number of the range: ");
scanf("%d",&ub);

for(i=lb;i<=ub;i++)
{
flag = 0;
for(j=2;j<=i/2+1;j++)
{
if(i%j == 0)
{
flag = 1;
break;
}
}
if(flag == 0)
{
printf("%d is a prime number\n",i);
}
else printf("%d is not a prime number\n",i);
}

return 0;
}
