#include <stdio.h>
int main()
{
int x = 1;
do
{
if(x%4 != 0)
{
printf("%d\n",x);
x++;
continue;
}
x++;
printf("Kuch toh bhi\n");
}while(x<=15);
return 0;
}
