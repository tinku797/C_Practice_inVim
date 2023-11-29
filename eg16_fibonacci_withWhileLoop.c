#include <stdio.h>
int main()
{
int e = 0;
int f = 1;
int g;
while(e<=34)
{
printf("The value of e is %d\n", e);
g = e+f;
e = f;
f = g;
}
return 0;
}
