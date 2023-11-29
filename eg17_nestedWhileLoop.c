#include <stdio.h>
int main()
{
int i = 1;
while(i<=5)
{
int j = 1;
while(j<=3)
{
printf("i: %d, j: %d\n",i,j);
j++;
}
i++;
}
return 0;
}
