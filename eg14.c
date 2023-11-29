#include <stdio.h>
int main()
{
int x = 1;
int y = 1;
while(x<=5)
{
printf("The value of y is %d\n",y);
y = y + x;
x++;
}
return 0;
}
