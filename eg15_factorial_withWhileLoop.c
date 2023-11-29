#include <stdio.h>
int main()
{
int e = 1;
int f = 1;
while(e<=5)
{
f = f*e;
printf("The value of f is %d\n",f);
e++;
}
return 0;
}
