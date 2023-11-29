#include <stdio.h>
int main()
{
int g = 1;
int spaces = 4;
while(g<=9)
{
int temp = 1;
while(temp <= spaces)
{
printf(" ");
temp++;
}
int i = 1;
while(i<=g)
{

printf("*");
i++;
}
g += 2;
spaces--;
printf("\n");
}
return 0;
}
