#include <stdio.h>
int main()
{
int i;
for(i=1;i<=15;i++)
{
if(i%4 != 0)
{
printf("%d\n",i);
continue;
}
printf("Kuch toh bhi\n");
}
return 0;
}
