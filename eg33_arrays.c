#include <stdio.h>
int main()
{
int arr[10];
int total = 0;
int i;

for(i=0;i<10;i++)
{
printf("Enter a number: ");
scanf("%d",&arr[i]);
}

for(i=0;i<10;i++)
{
total = total + arr[i];
}

printf("The total is: %d\n",total);
return 0;
}
