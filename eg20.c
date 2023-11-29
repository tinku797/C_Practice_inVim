#include <stdio.h>
int main()
{
int g = 1;
while(g<=5)
{
int i = 0;
while(i<g)
{
printf("*");
i++;
}
g++;
printf("\n");
}
return 0;
}
