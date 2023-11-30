#include <stdio.h>
int main()
{
// code to input a number
int inputNumber;
printf("Enter a number greater than 1, to be evaluated as a Prime number: ");
scanf("%d",&inputNumber);

//input validation code
if(inputNumber < 1)
{
printf("Invalid input: entered number was less than 1");
return 0;
}

//code to evaluate if the input number is a prime number or not
int divisor = 2;
while(divisor != inputNumber/2)
{
if(inputNumber%divisor == 0)
{
printf("The number %d is not a prime number, since it is divisible by %d\n", inputNumber, divisor);
return 0;
}
divisor++;
}
printf("The number %d is a prime number\n", inputNumber);
return 0;
}
