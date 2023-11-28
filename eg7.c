#include<stdio.h>
int main(){
int a;
printf("Enter a number: ");
scanf("%d",&a);
if(a<50){
printf("Entered number was less than 50");	
}
else{
if(a==50) printf("Entered number was 50");	
else{
printf("Entered number was greater than 50");	
}
}
return 0;
}
