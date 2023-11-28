#include <stdio.h>
int main(){
int a;
printf("Enter a number: ");
scanf("%d",&a);
if(a<50){
printf("The number you entered was less than 50");	
}
else if(a == 50) printf("The number you entered was equal to 50");
else printf("The number you entered was greater than 50");
return 0;
}
