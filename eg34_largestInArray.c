#include <stdio.h>
#include <stdlib.h>
int main()
{
int req;
int i;
int largest;
printf("Enter your requirement: ");
scanf("%d",&req);
int* ptr2arr = (int*)malloc(sizeof(int)*req);
if(ptr2arr == NULL)
{
printf("Cannot allocate memory for an integer array of %d elements\n",req);
return 0;
}
for(i=0;i<req;i++)
{
printf("Enter a number: ");
scanf("%d",ptr2arr + i);
}

largest = ptr2arr[0];
for(i=0;i<req;i++)
{
if(ptr2arr[i]>largest)
{
largest = ptr2arr[i];
}
}
printf("The largest number in the array is %d\n",largest);
return 0;
}
