#include <stdio.h>
int main()
{
int input;
do
{
printf("-----Menu-----\n");
printf("1. Add\n");
printf("2. Subtract\n");
printf("3. Exit\n");
printf("Enter your choice: ");
scanf("%d",&input);

if(input ==1)
{
int num1,num2;
printf("Enter the first number: ");
scanf("%d",&num1);
printf("Enter the second number: ");
scanf("%d",&num2);
printf("The addition of %d and %d is %d\n",num1,num2, num1+num2);
}

else if(input ==2)
{
int num1,num2;
printf("Enter the first number: ");
scanf("%d",&num1);
printf("Enter the second number: ");
scanf("%d",&num2);
printf("The subtraction of %d and %d is %d\n",num1,num2, num1-num2);
}

else if(input !=3) printf("Invalid input");
}while(input != 3);

return 0;
}
